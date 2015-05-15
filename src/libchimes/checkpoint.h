#ifndef CHECKPOINT_H
#define CHECKPOINT_H

/*
 * Needed because we insert a call to exit() in the host program when we get a
 * label to jump to that we don't recognize. And not all programs will
 * necessarily already have stdlib included.
 */
#include <stdlib.h>

extern void checkpoint();
// TESTING ONLY
extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*fp)(void *));

#endif
