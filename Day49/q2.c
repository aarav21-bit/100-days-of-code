/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 49 Que:2
*Date: 28-10-2026
*
*Problem Statement:
*Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, last = 0;

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' &&
            (i == 0 || str[i - 1] == ' ')) {
            last = i;
        }
    }

    for (i = 0; i < last; i++) {
        if (str[i] != ' ' &&
            (i == 0 || str[i - 1] == ' ')) {
            printf("%c. ", toupper((unsigned char)str[i]));
        }
    }

    printf("%s", str + last);

    return 0;
}
