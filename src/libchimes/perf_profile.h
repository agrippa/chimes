#ifndef INSTRUMENTATION_H
#define INSTRUMENTATION_H

#include <vector>
#include <map>
#include <stdint.h>
#include <string>

class perf_profile {
    public:
        perf_profile(const char *set_valid_labels[], int N);
        ~perf_profile();

        std::string tostr();

        void add_time(int label_id, unsigned long long start_time);
        static unsigned long long current_time_ms();

    private:
        unsigned long long *elapsed;
        unsigned long long *count;
        int nlabels;

        std::vector<std::string> valid_labels;
};

#endif
