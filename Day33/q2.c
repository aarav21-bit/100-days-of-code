/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 33 Que:2
*Date: 06-10-2026
*
*Problem Statement:
*Insert an element in a sorted array at the appropriate position..
*/


#include <stdio.h>

int main() {
    int arr[100], n, element, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d",&element); 

    i = n - 1;

    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    
    arr[i + 1] = element;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
