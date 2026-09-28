/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 06 Que:1
*Date: 28-09-2026
*
*Problem Statement:
*Write a program to input an integer and check whether it is even or odd using if–else.
*/
#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return 0;
}
