/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 19 Que:2
*Date: 30-09-2026
*
*Problem Statement:
*Write a program to find the sum of digits of a number.
*/

#include <stdio.h>

int main()
{
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
