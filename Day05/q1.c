/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 05 Que:1
*Date: 28-09-2026
*
*Problem Statement:
*Write a program to calculate simple and compound interest for given principal, rate, and time.
*/


#include <stdio.h>

int main()
{
    float p, r, t, si, ci, amount;
    int i;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    // Simple Interest
    si = (p * r * t) / 100;

    // Compound Interest
    amount = p;

    for(i = 1; i <= t; i++)
    {
        amount = amount * (1 + r / 100);
    }

    ci = amount - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
