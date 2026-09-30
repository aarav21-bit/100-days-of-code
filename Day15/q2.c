/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 15 Que:2
*Date: 30-09-2026
*
*Problem Statement:
*Write a program to reverse a given number.
*/

#include <stdio.h>

int main()
{
    int n, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("Reverse = %d", reverse);

    return 0;
}
