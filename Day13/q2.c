/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 13 Que:2
*Date: 30-09-2026
*
*Problem Statement:
*Write a program to print numbers from 1 to n.
*/

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
