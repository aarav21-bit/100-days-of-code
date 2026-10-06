/*
*Name: Aarav Deshlehra
*Roll: 590041873
*Day: 33 Que:1
*Date: 06-10-2026
*
*Problem Statement:
*Search in a sorted array using binary search.
*/

#include <stdio.h>

int main() {
    int n, target;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    int low = 0;
    int high = n - 1;
    int found = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            printf("%d found at position %d\n", target, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("%d not found in the array\n", target);
    }

    return 0;
}

