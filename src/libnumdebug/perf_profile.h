#ifndef INSTRUMENTATION_H
#define INSTRUMENTATION_H

#include <vector>
#include <map>
#include <stdint.h>

class perf_profile {
    public:
        perf_profile(const char *set_valid_labels[], int N);

        void start_timer(int label_id);
        void stop_timer(int label_id);
        std::string tostr();

    private:
        std::map<int, uint64_t> elapsed;
        std::map<int, uint64_t> count;
        std::map<int, uint64_t> start_times;
        std::map<int, unsigned> depth;

        std::vector<std::string> valid_labels;
};

#endif
