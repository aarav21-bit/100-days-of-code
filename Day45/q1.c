/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 45 Que:1
*Date: 27-10-2026
*
*Problem Statement:
*Count frequency of a given character in a string.
*/


#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to count: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}
