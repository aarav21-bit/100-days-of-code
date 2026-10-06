/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 34 Que:2
*Date: 06-10-2026
*
*Problem Statement:
*Delete an element from an array.
*/
#include <stdio.h>

int main() {
    int arr[100];
    int n, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &position);

    
    if (position < 1 || position > n) {
        printf("Invalid position\n");
        return 0;
    }

    
    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

