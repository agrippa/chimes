#include "trace_serialization.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>

using namespace std;

void *serialize_traces(map<unsigned, vector<int> *>* thread_traces, size_t *out_len) {
    size_t len = sizeof(int);

    for (map<unsigned, vector<int> *>::iterator i =
            thread_traces->begin(), e = thread_traces->end();
            i != e; i++) {
        len += sizeof(unsigned) + sizeof(int); // thread and trace length

        vector<int> *trace = i->second;
        for (std::vector<int>::iterator trace_iter = trace->begin(),
                trace_end = trace->end(); trace_iter != trace_end;
                trace_iter++) {
            len += sizeof(int); // each element of each trace
        }
    }

    unsigned char *buffer = (unsigned char *)malloc(len);
    unsigned char *iter = buffer;

    int nthreads = thread_traces->size();
    memcpy(iter, &nthreads, sizeof(nthreads));
    iter += sizeof(nthreads);

    for (map<unsigned, vector<int> *>::iterator i =
            thread_traces->begin(), e = thread_traces->end();
            i != e; i++) {
        unsigned thread = i->first;
        vector<int> *trace = i->second;
        int trace_len = trace->size();

        memcpy(iter, &thread, sizeof(thread));
        iter += sizeof(thread);

        memcpy(iter, &trace_len, sizeof(trace_len));
        iter += sizeof(trace_len);

        for (std::vector<int>::iterator trace_iter = trace->begin(),
                trace_end = trace->end(); trace_iter != trace_end;
                trace_iter++) {
            int trace = *trace_iter;
            memcpy(iter, &trace, sizeof(trace));
            iter += sizeof(trace);
        }
        delete trace;
    }
    assert((size_t)(iter - buffer) == len);

    *out_len = len;
    return (buffer);
}

map<unsigned, vector<int> >* deserialize_traces(void *buffer, size_t len,
        map<unsigned, unsigned> *trace_indices) {
    unsigned char *iter = (unsigned char *)buffer;

    map<unsigned, vector<int> >* result = new map<unsigned, vector<int> >();

    int nthreads;
    memcpy(&nthreads, iter, sizeof(nthreads));
    iter += sizeof(nthreads);

    for (int i = 0; i < nthreads; i++) {
        unsigned thread;
        memcpy(&thread, iter, sizeof(thread));
        iter += sizeof(thread);

        result->insert(pair<unsigned, vector<int> >(thread, vector<int>()));
        trace_indices->insert(pair<unsigned, unsigned>(thread, 0));

        int trace_len;
        memcpy(&trace_len, iter, sizeof(trace_len));
        iter += sizeof(trace_len);

        for (int j = 0; j < trace_len; j++) {
            int trace_ele;
            memcpy(&trace_ele, iter, sizeof(trace_ele));
            iter += sizeof(trace_ele);

            result->at(thread).push_back(trace_ele);
        }
    }
    fprintf(stderr, "%lu %lu\n",(size_t)(iter - (unsigned char *)buffer), len);
    assert((size_t)(iter - (unsigned char *)buffer) == len);

    return (result);
}
