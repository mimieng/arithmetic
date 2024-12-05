#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "sqstack.cpp"  

int main() 
{
    SqStack s;
    ElemType e;

    InitStack(&s);

    if (StackEmpty(&s)) {
        printf("栈s为空\n");
    }
    else {
        printf("栈s非空\n");
    }

    Push(&s, 'a');
    Push(&s, 'b');
    Push(&s, 'c');
    Push(&s, 'd');
    Push(&s, 'e');

    if (StackEmpty(&s)) {
        printf("栈s为空\n");
    }
    else {
        printf("栈s非空\n");

    printf("出栈序列: ");
    while (!StackEmpty(&s)) {
        if (Pop(&s, &e)) {
            printf("%c ", e);
        }
    }
    printf("\n");

   
    if (StackEmpty(&s)) {
        printf("栈s为空\n");
    }
    else {
        printf("栈s非空\n");
    }

   
    DestroyStack(&s) ;
    return 0;
}