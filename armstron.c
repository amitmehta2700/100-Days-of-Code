#include <stdio.h>

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) return 0;
    if (n < 0) {
        printf("Negative numbers are not considered.\n");
        return 0;
    }

    int original = n;
    int digits = 0;
    int temp = n;

    if (temp == 0) digits = 1;
    else {
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = n;
    int sum = 0;
    while (temp > 0) {
        int d = temp % 10;
        int powd = 1;
        for (int i = 0; i < digits; i++)
            powd *= d;
        sum += powd;
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}