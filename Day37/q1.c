/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 37 Que:1
*Date: 13-10-2026
*
*Problem Statement:
*Find the sum of each row of a matrix and store it in an array.
*/


#include <stdio.h>

int main()
{
    int a[10][10], sum[10];
    int i, j, r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        sum[i] = 0;
        for(j = 0; j < c; j++)
        {
            sum[i] += a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for(i = 0; i < r; i++)
    {
        printf("Row %d = %d\n", i + 1, sum[i]);
    }

    return 0;
}

