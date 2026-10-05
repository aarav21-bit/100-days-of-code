/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 32 Que:2
*Date: 05-10-2026
*
*Problem Statement:
*Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main()
{
    long long n;
    int count[10] = {0};
    int digit, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    
    if (n == 0)
    {
        printf("Most frequent digit: 0\n");
        return 0;
    }

    
    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    
    for (int i = 1; i < 10; i++)
    {
        if (count[i] > count[maxDigit])
        {
            maxDigit = i;
        }
    }

    printf("Most frequent digit: %d\n", maxDigit);
    printf("It occurs %d times.\n", count[maxDigit]);

    return 0;
}
