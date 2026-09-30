/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 16 Que:1
*Date: 30-09-2026
*
*Problem Statement:
*Write a program to take a number as input and print its equivalent binary representation..
*/

#include <stdio.h>

int main()
{
    int n, binary = 0, remainder, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        n = n / 2;
        place = place * 10;
    }

    printf("Binary = %d", binary);

    return 0;
}

