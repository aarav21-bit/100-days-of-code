/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 16 Que:2
*Date: 30-09-2026
*
*Problem Statement:
*Write a program to check if a number is a palindrome.
*/

#include <stdio.h>

int main()
{
    int n, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse)
    {
        printf("The number is a palindrome.");
    }
    else
    {
        printf("The number is not a palindrome.");
    }

    return 0;
}

