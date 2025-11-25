#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 0 to %d, with one missing):\n", n, n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++)
        actualSum += arr[i];

    int missing = expectedSum - actualSum;

    printf("Missing number is: %d", missing);

    return 0;
}
