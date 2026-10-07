/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 36 Que:2
*Date: 07-10-2026
*
*Problem Statement:
*Find the sum of all elements in a matrix..
*/

#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
