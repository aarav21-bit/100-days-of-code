/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 46 Que:2
*Date: 28-10-2026
*
*Problem Statement:
*Find the first repeating lowercase alphabet in a string.
*/


#include <stdio.h>

int main() {
    char str[100];
    int i, freq[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;

            if (freq[str[i] - 'a'] == 2) {
                printf("First repeating alphabet: %c", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.");

    return 0;
}
