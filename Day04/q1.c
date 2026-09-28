/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 04 Que:1
*Date: 28-09-2026
*
*Problem Statement:
*Write a program to swap two numbers without using a third variable..
*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
