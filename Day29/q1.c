/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 29 Que:1
*Date: 04-10-2026
*
*Problem Statement:
*Find the sum of array elements.
*/


#include <stdio.h>

int main()
{
    int a[10], n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum of array elements = %d", sum);

    return 0;
}
