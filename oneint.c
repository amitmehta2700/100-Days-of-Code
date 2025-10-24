#include <stdio.h>
#include <limits.h>  // for INT_MIN

int mostFrequentDigit(int n) {
    int count[10] = {0};
    int digit;

    if (n < 0) {
        n = -n;     // handle negative numbers
    }
    if (n == 0) {
        // Only one digit: 0
        return 0;
    }

    // Count occurrences of each digit
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    // Find the digit with maximum count
    int maxCount = 0;
    int resultDigit = 0;
    for (int d = 0; d < 10; d++) {
        if (count[d] > maxCount) {
            maxCount = count[d];
            resultDigit = d;
        }
    }

    return resultDigit;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int digit = mostFrequentDigit(num);
    printf("Digit that occurs most often: %d\n", digit);

    return 0;
}
