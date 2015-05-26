#ifndef MERGE_INFO_H
#define MERGE_INFO_H

#include <vector>

class merge_info {
    public:
        merge_info(std::vector<size_t> set_param_aliases,
                size_t set_return_alias) : param_aliases(set_param_aliases),
            return_alias(set_return_alias) { }

        size_t get_return_alias() { return return_alias; }
        std::vector<size_t> get_param_aliases() { return param_aliases; }

    private:
        std::vector<size_t> param_aliases;
        size_t return_alias;
};

#endif
