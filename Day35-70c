#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rightRotate(int arr[], int n, int k) {
    k = k % n;  // In case k is greater than n
    reverse(arr, 0, n - 1);          // Reverse the entire array
    reverse(arr, 0, k - 1);          // Reverse the first k elements
    reverse(arr, k, n - 1);          // Reverse the remaining elements
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rightRotate(arr, n, k);

    printf("Array after right rotation by %d positions: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
