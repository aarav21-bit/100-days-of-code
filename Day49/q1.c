/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 49 Que:1
*Date: 28-10-2026
*
*Problem Statement:
*Print the initials of a name.
*/

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter your name: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z')
                printf("%c.", str[i] - 32);
            else if (str[i] >= 'A' && str[i] <= 'Z')
                printf("%c.", str[i]);
        }
    }

    return 0;
}
