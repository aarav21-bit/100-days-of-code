/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 34 Que:1
*Date: 06-10-2026
*
*Problem Statement:
*Insert an element in an array at a given position.
*/

#include <stdio.h>

int main() {
    int arr[100];
    int n, element, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position to insert at: ");
    scanf("%d", &position);

    
    if (position < 1 || position > n + 1) {
        printf("Invalid position\n");
        return 0;
    }

    
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[position - 1] = element;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
