/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 26 Que:2
*Date: 01-10-2026
*
*Problem Statement:
*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {

        if (i <= 3) {
            for (j = 1; j <= 2 * i - 1; j++) {
                printf("*\n");
            }
        } else {
            for (j = 1; j <= 2 * (6 - i) - 1; j++) {
                printf("*\n");
            }
        }

        if (i != 5)
            printf("\n");
    }

    return 0;
}

