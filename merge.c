#include <stdio.h>
int main() {
    int a[5] = {12, 11, 13, 5, 6};
    int b[5] = {7, 17, 2, 8, 3};
    int merged[10];
    int i = 0, j = 0, k = 0;
    while (i < 5 && j < 5) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    return 0;
    while (i < 5) {
        merged[k++] = a[i++];
    }
    while (j < 5) {
        merged[k++] = b[j++];
    }
    printf("Merged array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}