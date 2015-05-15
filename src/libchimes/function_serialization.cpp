#include <map>
#include <string>

#include <assert.h>
#include <string.h>

#include "chimes_common.h"
#include "serialization_common.h"

using namespace std;

unsigned char *serialize_functions(
        map<string, map<std::string, void *> > *functions,
        uint64_t *out_len) {
    size_t len = sizeof(int); // nmodules
    for (map<string, map<string, void *> >::iterator m_i = functions->begin(),
            m_e = functions->end(); m_i != m_e; m_i++) {

        len += (m_i->first.size() + 1); // module name
        len += sizeof(int); // nfunctions

        for (map<string, void *>::iterator f_i = m_i->second.begin(),
                f_e = m_i->second.end(); f_i != f_e; f_i++) {
            string name = f_i->first;
            void *ptr = f_i->second;
            len += (sizeof(ptr) + name.size() + 1);
        }
    }

    unsigned char *serialization = (unsigned char *)malloc(
            sizeof(unsigned char) * len);
    unsigned char *iter = serialization;

    int nmodules = functions->size();
    memcpy(iter, &nmodules, sizeof(nmodules));
    iter += sizeof(nmodules);

    for (map<string, map<string, void *> >::iterator m_i = functions->begin(),
            m_e = functions->end(); m_i != m_e; m_i++) {
        string module_name = m_i->first;
        memcpy(iter, module_name.c_str(), module_name.size() + 1);
        iter += (module_name.size() + 1);

        map<string, void *> module_functions = m_i->second;
        int nfunctions = module_functions.size();
        memcpy(iter, &nfunctions, sizeof(nfunctions));
        iter += sizeof(nfunctions);

        for (map<string, void *>::iterator f_i = module_functions.begin(),
                f_e = module_functions.end(); f_i != f_e; f_i++) {
            string name = f_i->first;
            void *ptr = f_i->second;

            // name, null-terminated
            memcpy(iter, name.c_str(), name.size() + 1);
            iter += (name.size() + 1);

            memcpy(iter, &ptr, sizeof(ptr));
            iter += sizeof(ptr);
        }
    }

    assert((size_t)(iter - serialization) == len);

    *out_len = len;
    return serialization;
}

map<string, map<std::string, void *> > *deserialize_functions(
        unsigned char *functions_serialized,
        uint64_t functions_serialized_len) {
    map<string, map<string, void *> > *result =
        new map<string, map<string, void *> >();
    unsigned char *iter = functions_serialized;

    int nmodules;
    memcpy(&nmodules, iter, sizeof(nmodules));
    iter += sizeof(nmodules);

    for (int i = 0; i < nmodules; i++) {
        int module_name_len = 0;
        while (iter[module_name_len] != 0) {
            module_name_len++;
        }

        string module_name((const char *)iter, (size_t)module_name_len);
        iter += (module_name_len + 1);

        assert(result->find(module_name) == result->end());
        result->insert(pair<string, map<string, void *> >(module_name,
                    map<string, void *>()));

        int nfunctions;
        memcpy(&nfunctions, iter, sizeof(nfunctions));
        iter += sizeof(nfunctions);

        for (int j = 0; j < nfunctions; j++) {
            int name_len = 0;
            while (iter[name_len] != 0) {
                name_len++;
            }

            std::string name((const char *)iter, (size_t)name_len);
            iter += (name_len + 1); // account for null-terminator

            void *ptr;
            memcpy(&ptr, iter, sizeof(ptr));
            iter += sizeof(ptr);

            assert(result->at(module_name).find(name) ==
                    result->at(module_name).end());
            result->at(module_name).insert(pair<string, void *>(name, ptr));
        }
    }

    return (result);
}
