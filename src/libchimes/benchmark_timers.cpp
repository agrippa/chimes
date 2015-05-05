#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <time.h>
#include <sys/time.h>

#ifdef __MACH__
#include <mach/clock.h>
#include <mach/mach.h>
#endif

#ifdef __MACH__
// Nanoseconds
unsigned long long get_mach_time() {
    clock_serv_t cclock;
    mach_timespec_t mts;
    host_get_clock_service(mach_host_self(), CALENDAR_CLOCK, &cclock);
    clock_get_time(cclock, &mts);
    mach_port_deallocate(mach_task_self(), cclock);
    unsigned long long s = 1000000000ULL * (unsigned long long)mts.tv_sec;
    return (unsigned long long)mts.tv_nsec + s;
}
#endif

#ifndef __MACH__
// Nanoseconds
unsigned long long get_clock_gettime() {
    struct timespec t ={0,0};
    clock_gettime(CLOCK_MONOTONIC, &t);
    unsigned long long s = 1000000000ULL * (unsigned long long)t.tv_sec;
    return (unsigned long long)t.tv_nsec + s;
}
#endif

// Microseconds
unsigned long long get_gettimeofday() {
    struct timeval t;
    assert(gettimeofday(&t, NULL) == 0);
    unsigned long long s = 1000000ULL * (unsigned long long)t.tv_sec;
    return (unsigned long long)t.tv_usec + s;
}

// Milliseconds
unsigned long long get_clock() {
    return (clock() / (CLOCKS_PER_SEC / 1000));
}

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "usage: %s niters selection\n", argv[0]);
        return (1);
    }

    int niters = atoi(argv[1]);
    int selection = atoi(argv[2]);

    switch (selection) {
#ifdef __MACH__
        case (0):
            for (int i = 0; i < niters; i++) get_mach_time();
            break;
#endif
#ifndef __MACH__
        case (1):
            for (int i = 0; i < niters; i++) get_clock_gettime();
            break;
#endif
        case (2):
            for (int i = 0; i < niters; i++) get_gettimeofday();
            break;
        case (3):
            for (int i = 0; i < niters; i++) get_clock();
            break;
        default:
            fprintf(stderr, "Unknown selection\n");
            return (1);
    }

    return (0);
}
