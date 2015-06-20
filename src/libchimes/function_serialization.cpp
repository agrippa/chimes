#include <map>
#include <string>
#include <cstring>

#include <assert.h>

#include "chimes_common.h"
#include "serialization_common.h"

using namespace std;

unsigned char *serialize_function_addresses(map<string, void *> *functions,
        uint64_t *out_len) {
    uint64_t len = sizeof(unsigned); // nfunctions
    for (map<string, void *>::iterator i = functions->begin(),
            e = functions->end(); i != e; i++) {
        len += i->first.size() + 1; // fname plus null terminator
        len += sizeof(void *); // fptr
    }

    unsigned char *serialization = (unsigned char *)malloc(len);
    unsigned char *iter = serialization;

    unsigned nfunctions = functions->size();
    memcpy(iter, &nfunctions, sizeof(nfunctions));
    iter += sizeof(nfunctions);

    for (map<string, void *>::iterator i = functions->begin(),
            e = functions->end(); i != e; i++) {
        string fname = i->first;
        void *fptr = i->second;

        memcpy(iter, fname.c_str(), fname.size());
        iter[fname.size()] = '\0';
        iter += (fname.size() + 1);

        memcpy(iter, &fptr, sizeof(fptr));
        iter += sizeof(fptr);
    }

    assert((uint64_t)(iter - serialization) == len);

    *out_len = len;
    return serialization;
}

map<string, void *> *deserialize_function_addresses(
        unsigned char *functions_serialized, uint64_t functions_serialized_len) {
    map<string, void *> *result = new map<string, void *>();

    unsigned char *iter = functions_serialized;

    unsigned nfunctions;
    memcpy(&nfunctions, iter, sizeof(nfunctions));
    iter += sizeof(nfunctions);

    for (unsigned i = 0; i < nfunctions; i++) {
        string fname((char *)iter);
        iter += fname.size() + 1;

        void *fptr;
        memcpy(&fptr, iter, sizeof(fptr));
        iter += sizeof(fptr);

        assert(result->find(fname) == result->end());
        result->insert(pair<string, void *>(fname, fptr));
    }

    assert((uint64_t)(iter - functions_serialized) == functions_serialized_len);

    return result;
}
