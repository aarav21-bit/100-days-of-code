/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 40 Que:1
*Date: 16-10-2026
*
*Problem Statement:
*Perform diagonal traversal of a matrix.
*/


#include <stdio.h>

int main() {
    int m, n, a[100][100];

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int d = 0; d < m + n - 1; d++) {
        for (int i = 0; i < m; i++) {
            int j = d - i;

            if (j >= 0 && j < n)
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

