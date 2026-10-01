/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 23 Que:2
*Date: 01-10-2026
*
*Problem Statement:
*Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/


#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

