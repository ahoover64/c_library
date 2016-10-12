#include <stdlib.h>
#include <stdio.h>

typedef struct StackNode_st {
    void* p;
    struct StackNode_st* next;
} StackNode;


/*
 *  Define the stack structure.
 */
#ifndef _STACK_IMPL_
#define _STACK_IMPL_
typedef struct Stack_st {
    StackNode* top;
} Stack;
#endif
#include "Stack.h"


void push(Stack s,void* p) {
    StackNode* sn = (StackNode*) malloc(sizeof(StackNode));
    sn->p = p;
    sn->next = s.top;
    s.top = sn;
}

void* pop(Stack s) {
    if (s.top == NULL) {
        return NULL;
    }
    void* p = s.top->p;
    StackNode* t = s.top;
    s.top = s.top->next;
    free(t);
    return p;
}

void* peek(Stack s) {
    if (s.top == NULL) {
        return NULL;
    }
    return s.top->p;
}

void clear(Stack s) {
    while (pop(s) != NULL) {}
}

