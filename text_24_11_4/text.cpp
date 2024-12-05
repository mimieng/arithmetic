#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include<malloc.h>
#define MAXSIZE 100  
typedef char ElemType;
typedef struct {
    ElemType data[MAXSIZE];
    int top;
} SqStack;

void InitStack(SqStack*& s) {
    s = (SqStack*)malloc(sizeof(SqStack));
    s->top = -1;

}

bool StackEmpty(SqStack*& s) {
    return s->top == -1;
}

bool Push(SqStack*& s, ElemType e) {
    if (s->top == MAXSIZE - 1) {
        return false;
    }
    s->data[++(s->top)] = e;
    return true;
}

bool Pop(SqStack*& s, ElemType*& e) {
    if (StackEmpty(s)) {
        return false;
    }
    *e = s->data[(s->top)--];
    return true;
}

void DestroyStack(SqStack *&s) {
    free(s);
}


int main() {
    SqStack s;
    ElemType e;
    InitStack(s);
    if (StackEmpty(s)) {
        printf("Õ»sÎª¿Õ\n");
    }
    else {
        printf("Õ»s·Ç¿Õ\n");
    }
    Push(&s, 'a');
    Push(&s, 'b');
    Push(&s, 'c');
    Push(&s, 'd');
    Push(&s, 'e');

    if (StackEmpty(s)) {
        printf("Õ»sÎª¿Õ\n");
    }
    else {
        printf("Õ»s·Ç¿Õ\n");
    }

    printf("³öÕ»ÐòÁÐ: ");
    while (!StackEmpty(s)) {
        if (Pop(s, e)) {
            printf("%c ", e);
        }
    }
    printf("\n");

    if (StackEmpty(&s)) {
        printf("Õ»sÎª¿Õ\n");
    }
    else {
        printf("Õ»s·Ç¿Õ\n");
    }

    DestroyStack(s);

    return 0;
}