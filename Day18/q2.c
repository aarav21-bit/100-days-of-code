/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 18 Que:2
*Date: 30-09-2026
*
*Problem Statement:
*Write a program to find the HCF (GCD) of two numbers..
*/

#include <stdio.h>

int main()
{
    int a, b, i, hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF = %d", hcf);

    return 0;
}
