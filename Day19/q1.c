/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 19 Que:1
*Date: 30-09-2026
*
*Problem Statement:
*Write a program to find the LCM of two numbers..
*/

#include <stdio.h>

int main()
{
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(i = 1; i <= a * b; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}
