#include <stdio.h>

int insertIntoSorted(int arr[], int n, int key, int capacity) {
    if (n >= capacity) {
        return n;
    }
    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
    return n + 1;
}

int main() {
    int capacity = 10;
    int arr[10] = {12, 16, 20, 40, 50, 70};
    int n = 6;  
    int key = 26;  

    printf("Before insertion: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    n = insertIntoSorted(arr, n, key, capacity);

    printf("After insertion: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
