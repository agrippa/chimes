#include <sstream>
#include <ctime>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <algorithm>
#include <time.h>
#include <sys/time.h>

#include "chimes_common.h"
#include "libchimes.h"
#include "perf_profile.h"

#ifdef __MACH__
#include <mach/clock.h>
#include <mach/mach.h>
#endif

unsigned long long perf_profile::current_time_ns() {
#ifdef __MACH__
    struct timeval t;
    VERIFY(gettimeofday(&t, NULL) == 0); 
    unsigned long long s = 1000000ULL * (unsigned long long)t.tv_sec;
    return (unsigned long long)t.tv_usec + s;
#if 0
    clock_serv_t cclock;
    mach_timespec_t mts;
    host_get_clock_service(mach_host_self(), CALENDAR_CLOCK, &cclock);
    clock_get_time(cclock, &mts);
    mach_port_deallocate(mach_task_self(), cclock);
    unsigned long long s = 1000000000ULL * (unsigned long long)mts.tv_sec;
    return (unsigned long long)mts.tv_nsec + s;
#endif
#else
    struct timespec t ={0,0};
    clock_gettime(CLOCK_MONOTONIC, &t);
    unsigned long long s = 1000000ULL * (unsigned long long)t.tv_sec;
    return (((unsigned long long)t.tv_nsec)/1000ULL) + s;
#endif
}

perf_profile::perf_profile(const char *set_valid_labels[], int N) {
    nlabels = N;
    elapsed = (unsigned long long *)malloc(N * sizeof(unsigned long long));
    count = (unsigned long long *)malloc(N * sizeof(unsigned long long));

    memset(elapsed, 0x00, N * sizeof(unsigned long long));
    memset(count, 0x00, N * sizeof(unsigned long long));

    for (int i = 0; i < N; i++) {
        valid_labels.push_back(std::string(set_valid_labels[i]));
    }
}

perf_profile::~perf_profile() {
    free(elapsed);
    free(count);
}

void perf_profile::add_time(int label_id, const unsigned long long start_time) {
    const unsigned long long end_time = current_time_ns();
    __sync_fetch_and_add(elapsed + label_id, end_time - start_time);
    __sync_fetch_and_add(count + label_id, 1);
}

class label_info {
    public:
        label_info(std::string set_label, unsigned long long set_count,
                unsigned long long set_elapsed) : label(set_label),
                count(set_count), elapsed(set_elapsed) { }

        std::string get_label() { return label; }
        unsigned long long get_count() { return count; }
        unsigned long long get_elapsed() { return elapsed; }
    private:
        std::string label;
        unsigned long long count;
        unsigned long long elapsed;
};

static bool compare_label_info(label_info i, label_info j) {
    return (i.get_elapsed() > j.get_elapsed());
}

std::string perf_profile::tostr() {
    std::stringstream ss;

    std::vector<label_info> profiling_data;

    for (int i = 0; i < nlabels; i++) {
        profiling_data.push_back(label_info(valid_labels[i], count[i],
                    elapsed[i]));
    }

    std::sort(profiling_data.begin(), profiling_data.end(), compare_label_info);

    for (std::vector<label_info>::iterator i = profiling_data.begin(),
            e = profiling_data.end(); i != e; i++) {
        ss << i->get_label() << "(" << i->get_count() << ") : " <<
            i->get_elapsed() << "\n";
    }
    return ss.str();
}
