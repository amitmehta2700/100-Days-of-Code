#include<stdio.h>
#include<math.h>
int main() {
    float principal, rate, time, SI, CI;
    printf("Enter principal, rate and time");
    scanf("%f%f%f", &principal, &rate, &time);
    SI = (principal * rate * time) / 100;
    CI = principal * (pow((1 + rate / 100), time)) - principal;
    printf("Principal: %f\n", principal);
    printf("Simple Interest: %f\n", SI);
    printf("Compound Interest: %f\n", CI);
    return 0;
}