#ifndef SERIALIZED_CHECKPOINT_TIME_H
#define SERIALIZED_CHECKPOINT_TIME_H

typedef struct _serialized_checkpoint_time {
    unsigned tid;
    clock_t delta;
} serialized_checkpoint_time;

#endif
