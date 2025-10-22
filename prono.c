#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 0;

    if (n < 0) n = -n;

    int mul = 1;
    int found = 0;
    while (n > 0) {
        int r = n % 10;
        if (r % 2 != 0) {
            mul *= r;
            found = 1;
        }
        n /= 10;
    }

    if (found)
        printf("Product of odd digits is %d\n", mul);
    else
        printf("No odd digits found.\n");

    return 0;
}