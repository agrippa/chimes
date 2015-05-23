#ifndef NPM_CONTEXT_H
#define NPM_CONTEXT_H

#include <string>
#include <set>
#include <vector>

using namespace std;

class npm_context {
    public:
        npm_context(std::string set_fname) : fname(set_fname) { }

        void add_alias_locs(set<unsigned> &locs) {
            for (set<unsigned>::iterator i = locs.begin(), e = locs.end();
                    i != e; i++) {
                alias_locs.insert(*i);
            }
        }
        void add_created_alias(size_t a, size_t b) {
            aliases_created.push_back(pair<size_t, size_t>(a, b));
        }

        set<unsigned> *get_alias_locs() {
            return &alias_locs;
        }
        vector<pair<size_t, size_t> > *get_aliases_created() {
            return &aliases_created;
        }

    private:
        std::string fname;
        set<unsigned> alias_locs;
        vector<pair<size_t, size_t> > aliases_created;
};

class function_io_aliases {
    public:
        function_io_aliases(vector<size_t> set_param_aliases,
                size_t set_return_alias) : param_aliases(set_param_aliases),
                return_alias(set_return_alias) { }

        int get_n_params() { return param_aliases.size(); }
        size_t get_param_alias(int index) { return param_aliases[index]; }
        size_t get_return_alias() { return return_alias; }
    private:
        vector<size_t> param_aliases;
        size_t return_alias;
};

class call_aliases {
    public:
        call_aliases(std::string set_callee_name,
                vector<size_t> set_arg_aliases, size_t set_return_alias) :
                callee_name(set_callee_name), arg_aliases(set_arg_aliases),
                return_alias(set_return_alias) { }

        std::string get_callee_name() {
            return callee_name;
        }
        int get_n_args() { return arg_aliases.size(); }
        size_t get_arg_alias(int index) { return arg_aliases[index]; }
        size_t get_return_alias() { return return_alias; }
    private:
        std::string callee_name;
        vector<size_t> arg_aliases;
        size_t return_alias;
};

#endif
