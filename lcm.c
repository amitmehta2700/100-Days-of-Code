#include <stdio.h>

int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;

    if (a == 0 || b == 0) {
        printf("LCM = 0\n");
        return 0;
    }

    int g = gcd(a, b);
    long long lcm = (long long)(a / g) * b; // compute with long long to reduce overflow risk
    if (lcm < 0) lcm = -lcm;
    printf("LCM = %lld\n", lcm);
    return 0;
}