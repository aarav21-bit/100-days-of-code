/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 28 Que:2
*Date: 04-10-2026
*
*Problem Statement:
*Read and print elements of a one-dimensional array.
*/


#include <stdio.h>

int main()
{
    int a[10], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
