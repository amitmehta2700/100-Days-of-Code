#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;

    a = abs(a);
    b = abs(b);

    if (a == 0 && b == 0) {
        printf("HCF undefined for 0 and 0.\n");
        return 0;
    }

    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }

    printf("HCF (GCD) = %d\n", a);
    return 0;
}
