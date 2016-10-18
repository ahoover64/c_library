#ifndef __STACK_H__
#define __STACK_H__

/*
 *  Define the stack structure.
 */
typedef struct StackNode_st {
    void* p;
    struct StackNode_st* next;
} StackNode;

typedef struct Stack_st {
    StackNode* top;
} Stack;

void push(Stack, void*);

void* pop(Stack);

void* peek(Stack);

void clear(Stack);

#endif // __STACK__
