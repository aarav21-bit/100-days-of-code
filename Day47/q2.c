/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 47 Que:2
*Date: 28-10-2026
*
*Problem Statement:
*Find the longest word in a sentence.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[200];
    int i, start = 0, len = 0, max = 0, j;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            if (len > max) {
                max = len;

                for (j = 0; j < len; j++) {
                    longest[j] = str[start + j];
                }

                longest[j] = '\0';
            }

            len = 0;
            start = i + 1;
        } else {
            len++;
        }

        if (str[i] == '\0')
            break;
    }

    if (max > 0)
        printf("Longest word: %s\nLength: %d", longest, max);
    else
        printf("No words found.");

    return 0;
}
