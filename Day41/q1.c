/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 41 Que:1
*Date: 23-10-2026
*
*Problem Statement:
*Count characters in a string without using built-in length functions.
*/



#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}

