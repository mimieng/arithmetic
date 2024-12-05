#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "sqstack.cpp"  

int main() 
{
    SqStack s;
    ElemType e;

    InitStack(&s);

    if (StackEmpty(&s)) {
        printf("ջsΪ��\n");
    }
    else {
        printf("ջs�ǿ�\n");
    }

    Push(&s, 'a');
    Push(&s, 'b');
    Push(&s, 'c');
    Push(&s, 'd');
    Push(&s, 'e');

    if (StackEmpty(&s)) {
        printf("ջsΪ��\n");
    }
    else {
        printf("ջs�ǿ�\n");

    printf("��ջ����: ");
    while (!StackEmpty(&s)) {
        if (Pop(&s, &e)) {
            printf("%c ", e);
        }
    }
    printf("\n");

   
    if (StackEmpty(&s)) {
        printf("ջsΪ��\n");
    }
    else {
        printf("ջs�ǿ�\n");
    }

   
    DestroyStack(&s) ;
    return 0;
}