/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 32 Que:1
*Date: 05-10-2026
*
*Problem Statement:
*Merge two arrays.
*/

#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7};

    int n1 = 4;
    int n2 = 3;
    int c[n1 + n2];

    
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    
    for (int i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    
    printf("Merged array: ");

    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
