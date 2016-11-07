#include <stdlib.h>
#include <stdio.h>

/*
 *  Define the stack structure.
 */
typedef struct StackNode_st {
    void* p;
    struct StackNode_st* next;
} StackNode;

struct Stack_st {
    StackNode* top;
};

#ifndef __STACK_IMPL__
#define __STACK_IMPL__
typedef struct Stack_st *Stack;
#endif

Stack create_stack() {
    Stack s = malloc(sizeof(struct Stack_st));
    s->top = NULL;
    return s;
}

void push(Stack s, void* p) {
    StackNode* sn = (StackNode*) malloc(sizeof(StackNode));
    sn->p = p;
    sn->next = s->top;
    s->top = sn;
}

void* pop(Stack s) {
    if (s->top == NULL) {
        return NULL;
    }
    void* p = s->top->p;
    StackNode* t = s->top;
    s->top = s->top->next;
    free(t);
    return p;
}

void* peek(Stack s) {
    if (s->top == NULL) {
        return NULL;
    }
    return s->top->p;
}

void clear(Stack s) {
    while (pop(s) != NULL) {}
}

