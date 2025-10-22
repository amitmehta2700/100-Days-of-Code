#include <stdio.h>

int main(void) {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; ++i) {
        double term = (2.0 * i) / (4.0 * i - 1.0); 
        sum += term;
    }

    printf("Sum of series up to %d terms = %.6f\n", n, sum);
    return 0;
}
