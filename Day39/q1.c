/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 39 Que:1
*Date: 15-10-2026
*
*Problem Statement:
*Check if the elements on the diagonal of a matrix are distinct.
*/



#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

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
        for (j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}

