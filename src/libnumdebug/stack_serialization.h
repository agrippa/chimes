#ifndef STACK_SERIALIZATION_H
#define STACK_SERIALIZATION_H

#define NEW_STACK_FRAME 0
#define NEW_STACK_VAR   1

unsigned char *serialize_program_stack(vector<stack_frame *> *program_stack,
        uint64_t *out_len);

#endif
