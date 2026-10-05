/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 31 Que:1
*Date: 05-10-2026
*
*Problem Statement:
*Search for an element in an array using linear search.
*/


#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, found = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
