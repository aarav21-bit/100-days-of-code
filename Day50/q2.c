/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 50 Que:2
*Date: 28-10-2026
*
*Problem Statement:
*Print all sub-strings of a string.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, n;

    printf("Enter a string: ");
    scanf("%99s", str);

    n = strlen(str);

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
