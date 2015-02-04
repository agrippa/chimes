#include <vector>

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "stack_var.h"
#include "stack_frame.h"
#include "serialization_common.h"

void increase_capacity(unsigned char **stream,
        uint64_t *stream_capacity, uint64_t new_capacity) {
    unsigned char *new_stream = (unsigned char *)realloc(*stream, new_capacity);
    assert(new_stream != NULL);
    *stream = new_stream;
    *stream_capacity = new_capacity;
}

void ensure_capacity(unsigned char **stream, uint64_t *stream_capacity,
        uint64_t desired_capacity) {
    if (desired_capacity > *stream_capacity) {
        uint64_t new_capacity = *stream_capacity *
            stream_capacity_increase_ratio;
        while (new_capacity < desired_capacity) {
            new_capacity *= stream_capacity_increase_ratio;
        }
        increase_capacity(stream, stream_capacity, new_capacity);
    }
}

void new_var(unsigned char **stream, uint64_t *stream_capacity,
        uint64_t *stream_len, string mangled_name, string type, void *address,
        size_t size, int is_ptr, std::vector<int> *ptr_offsets) {
    int ptr_offsets_len = ptr_offsets->size();
    int var_record_size = 1 + (mangled_name.length() + 1) +
        (type.length() + 1) + sizeof(address) + sizeof(size) + sizeof(is_ptr) +
        sizeof(ptr_offsets_len) + (ptr_offsets_len * sizeof(int)) + size;
    ensure_capacity(stream, stream_capacity, *stream_len + var_record_size);

#ifdef VERBOSE
    fprintf(stderr, "Serializing variable %s\n", mangled_name.c_str());
    fprintf(stderr, "  Type: %s\n", type.c_str());
    fprintf(stderr, "  Size: %lu\n", size);
    fprintf(stderr, "  Is ptr?: %d\n", is_ptr);
    fprintf(stderr, "  Pointer offsets len: %d\n", ptr_offsets_len);
    if (ptr_offsets_len > 0) {
        int i;
        fprintf(stderr, "  Pointer offsets: ");
        for (i = 0; i < ptr_offsets_len; i++) {
            fprintf(stderr, "%d ", (*ptr_offsets)[i]);
        }
        fprintf(stderr, "\n");
    }
#endif

    unsigned char *base = (*stream) + *stream_len;
    *base = NEW_STACK_VAR;
    base++;

    memcpy(base, mangled_name.c_str(), mangled_name.length());
    base[mangled_name.length()] = '\0';
    base += (mangled_name.length() + 1);

    memcpy(base, type.c_str(), type.length());
    base[type.length()] = '\0';
    base += (type.length() + 1);

    memcpy(base, &address, sizeof(address));
    base += sizeof(address);
    
    memcpy(base, &size, sizeof(size));
    base += sizeof(size);

    memcpy(base, &is_ptr, sizeof(is_ptr));
    base += sizeof(is_ptr);

    memcpy(base, &ptr_offsets_len, sizeof(ptr_offsets_len));
    base += sizeof(ptr_offsets_len);

    for (int i = 0; i < ptr_offsets_len; i++) {
        int offset = (*ptr_offsets)[i];
        memcpy(base, &offset, sizeof(offset));
        base += sizeof(offset);
    }

    memcpy(base, address, size);

    *stream_len += var_record_size;
}

stack_var *deserialize_var(unsigned char **ptr_to_iter) {
    unsigned char *iter = *ptr_to_iter;

    unsigned char *varname = iter;
#ifdef VERBOSE
    fprintf(stderr, "Deserializing variable %s\n", varname);
#endif

    unsigned char *type = iter;
    while (*type != '\0') {
        type++;
    }
    type++;
#ifdef VERBOSE
    fprintf(stderr, "  Type: %s\n", type);
#endif

    unsigned char *address_ptr = type;
    while (*address_ptr != '\0') {
        address_ptr++;
    }
    address_ptr++;
    void *address;
    memcpy(&address, address_ptr, sizeof(address));

    size_t size;
    unsigned char *size_ptr = address_ptr + sizeof(address);
    memcpy(&size, size_ptr, sizeof(size));
#ifdef VERBOSE
    fprintf(stderr, "  Size: %lu\n", size);
#endif

    int is_ptr;
    unsigned char *is_ptr_ptr = size_ptr + sizeof(size);
    memcpy(&is_ptr, is_ptr_ptr, sizeof(is_ptr));
#ifdef VERBOSE
    fprintf(stderr, "  Is ptr?: %d\n", is_ptr);
#endif

    int ptr_offsets_len;
    unsigned char *ptr_offsets_len_ptr = is_ptr_ptr + sizeof(is_ptr);
    memcpy(&ptr_offsets_len, ptr_offsets_len_ptr, sizeof(ptr_offsets_len));
#ifdef VERBOSE
    fprintf(stderr, "  Pointer offsets len: %d\n", ptr_offsets_len);
#endif

    stack_var *var = new stack_var((const char *)varname,
            (const char *)type, address, size, is_ptr);

#ifdef VERBOSE
    if (ptr_offsets_len > 0) {
        fprintf(stderr, "  Pointer offsets: ");
    }
#endif
    int *ptr_offsets = (int *)(ptr_offsets_len_ptr + sizeof(ptr_offsets_len));
    for (int i = 0; i < ptr_offsets_len; i++) {
#ifdef VERBOSE
        fprintf(stderr, "%d ", ptr_offsets[i]);
#endif
        var->add_pointer_offset(ptr_offsets[i]);
    }
#ifdef VERBOSE
    fprintf(stderr, "\n");
#endif

    unsigned char *tmp_buffer_ptr = (unsigned char *)(ptr_offsets +
            ptr_offsets_len);
    void *tmp_buffer = malloc(size);
    memcpy(tmp_buffer, tmp_buffer_ptr, size);
    var->set_tmp_buffer(tmp_buffer);

    *ptr_to_iter = tmp_buffer_ptr + size;

    return var;
}
