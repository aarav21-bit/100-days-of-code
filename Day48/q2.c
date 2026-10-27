/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 48 Que:2
*Date: 28-10-2026
*
*Problem Statement:
*Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], temp;
    int i, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            end = i - 1;

            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Reversed sentence: %s", str);

    return 0;
}
