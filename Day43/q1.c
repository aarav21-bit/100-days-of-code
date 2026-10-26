/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 43 Que:1
*Date: 26-10-2026
*
*Problem Statement:
*Reverse a string.
*/



#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[j] != '\0' && str[j] != '\n') {
        j++;
    }

    j--;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s", str);

    return 0;
}

