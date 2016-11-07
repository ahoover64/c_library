#ifndef __STACK_H__
#define __STACK_H__

#ifndef __STACK_IMPL__
typedef struct { } *Stack;
#endif

Stack create_stack();

void push(Stack, void*);

void* pop(Stack);

void* peek(Stack);

void clear(Stack);

#endif // __STACK__
