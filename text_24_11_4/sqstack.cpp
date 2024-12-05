#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 100  

typedef char ElemType;

typedef struct {
    ElemType data[MAXSIZE];
    int top;
} SqStack;


void InitStack(SqStack* s) {
    s->top = -1;
}


bool StackEmpty(SqStack* s) {
    return s->top == -1;
}


bool Push(SqStack* s, ElemType e) {
    if (s->top == MAXSIZE - 1) {
        printf("Stack overflow!\n");
        return false;
    }
    s->data[++(s->top)] = e;
    return true;
}


bool Pop(SqStack* s, ElemType* e) {
    if (StackEmpty(s)) {
        printf("Stack underflow!\n");
        return false;
    }
    *e = s->data[(s->top)--];
    return true;
}


void DestroyStack(SqStack* s) {
    free(s);
}