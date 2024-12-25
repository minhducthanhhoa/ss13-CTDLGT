#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n, int ascending) {
    int i, j, minOrMaxIdx;

    for (i = 0; i < n - 1; i++) {
        minOrMaxIdx = i;

        for (j = i + 1; j < n; j++) {
            if ((ascending && arr[j] < arr[minOrMaxIdx]) || (!ascending && arr[j] > arr[minOrMaxIdx])) {
                minOrMaxIdx = j;
            }
        }

        if (minOrMaxIdx != i) {
            printf("Swapping %d and %d\n", arr[i], arr[minOrMaxIdx]);
            swap(&arr[i], &arr[minOrMaxIdx]);
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Sorting in ascending order:\n");
    selectionSort(arr, n, 1);

    printf("After sorting in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nRe-enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Sorting in descending order:\n");
    selectionSort(arr, n, 0);

    printf("After sorting in descending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

