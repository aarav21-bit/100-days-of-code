/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 04 Que:2
*Date: 28-09-2026
*
*Problem Statement:
*Write a program to find and display the sum of the first n natural numbers.
*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}
