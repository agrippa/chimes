#ifndef STACK_SERIALIZATION_H
#define STACK_SERIALIZATION_H

unsigned char *serialize_program_stack(vector<stack_frame *> *program_stack,
        uint64_t *out_len);
vector<stack_frame *> *deserialize_program_stack(
        unsigned char *stack_serialized, uint64_t stack_serialized_len);

map<unsigned, vector<stack_frame *> *> *deserialize_program_stacks(
        unsigned char *stacks_serialized, uint64_t stacks_serialized_len);
unsigned char *serialize_program_stacks(
        map<unsigned, vector<stack_frame *> *> *program_stacks,
        uint64_t *out_len);

#endif
