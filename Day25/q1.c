/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 25 Que:1
*Date: 01-10-2026
*
*Problem Statement:
*Write a program to print the following pattern:
5
45
345
2345
12345
*/


#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
