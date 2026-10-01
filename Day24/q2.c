/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 24 Que:2
*Date: 01-10-2026
*
*Problem Statement:
*Write a program to print the following pattern:
1
12
123
1234
12345
*/


#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
