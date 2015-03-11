#include <sstream>
#include <ctime>
#include "perf_profile.h"
#include <assert.h>

static double current_time_ns() {
    clock_t t = clock();
    return (t * 1000000.0) / CLOCKS_PER_SEC;
}

perf_profile::perf_profile(const char *set_valid_labels[], int N) {
    for (int i = 0; i < N; i++) {
        valid_labels.push_back(std::string(set_valid_labels[i]));
        elapsed[i] = 0;
        depth[i] = 0;
    }
}

void perf_profile::start_timer(int label_id) {
    double t = current_time_ns();

    int curr_depth = depth[label_id];
    if (curr_depth == 0) {
        assert(start_times.find(label_id) == start_times.end());
        start_times[label_id] = t;
    }
    depth[label_id] = curr_depth + 1;
}

void perf_profile::stop_timer(int label_id) {
    double t = current_time_ns();

    assert(start_times.find(label_id) != start_times.end());

    int curr_depth = depth[label_id];
    if (curr_depth == 1) {
        elapsed[label_id] = elapsed[label_id] + (t - start_times[label_id]);
        start_times.erase(label_id);
        count[label_id] += 1;
    }
    depth[label_id] = curr_depth - 1;
}

std::string perf_profile::tostr() {
    std::stringstream ss;

    for (std::map<int, unsigned>::iterator i = depth.begin(),
            e = depth.end(); i != e; i++) {
        assert(i->second == 0);
    }

    for (std::map<int, uint64_t>::iterator i = start_times.begin(),
            e = start_times.end(); i != e; i++) {
        assert(i->second == 0);
    }

    for (std::map<int, uint64_t>::iterator i = elapsed.begin(),
            e = elapsed.end(); i != e; i++) {
        ss << valid_labels[i->first] << "(" << count[i->first] << ") : " <<
            i->second << "\n";
    }
    return ss.str();
}
