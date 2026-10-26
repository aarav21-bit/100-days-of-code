/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 43 Que:2
*Date: 26-10-2026
*
*Problem Statement:
*Check if a string is a palindrome.
*/



#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[j] != '\0' && str[j] != '\n') {
        j++;
    }

    j--;

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 1)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}

