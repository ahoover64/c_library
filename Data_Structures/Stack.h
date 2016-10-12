#ifndef __STACK_H__
#define __STACK_H__

#ifndef _STACK_IMPL_
#define _STACK_IMPL_
typedef struct Stack_st {} Stack;
#endif

void push(Stack, void*);

void* pop(Stack);

void* peek(Stack);

void clear(Stack);

#endif // __STACK__
