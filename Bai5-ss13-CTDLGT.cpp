#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int swapped;
    int iterationCount = 0;

    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        iterationCount++;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;

                printf("After swapping %d and %d: ", arr[j], arr[j + 1]);
                for (int k = 0; k < n; k++) {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }

        if (!swapped) {
            break;
        }
    }

    printf("Sorting completed in %d iterations.\n", iterationCount);
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

    bubbleSort(arr, n);

    printf("After sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

