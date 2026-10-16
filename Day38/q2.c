/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 38 Que:2
*Date: 14-10-2026
*
*Problem Statement:
*Check if a matrix is symmetric.
*/


#include <stdio.h>

int main()
{
    int a[10][10];
    int i, j, n, flag = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("Matrix is symmetric.");
    else
        printf("Matrix is not symmetric.");

    return 0;
}

