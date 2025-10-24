#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // return index if found
        }
    }
    return -1;  // not found
}

int main() {
    int arr[] = {10, 20, 35, 40, 55};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 40;
    int result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
