/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 39 Que:2
*Date: 15-10-2026
*
*Problem Statement:
*Find the sum of main diagonal elements for a square matrix..
*/


#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("Sum of main diagonal = %d", sum);

    return 0;
}

