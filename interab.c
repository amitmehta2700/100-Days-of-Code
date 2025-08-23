#include<stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers a&b:");
    scanf("%d%d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a: %d\n", a);
    printf("value of b: %d\n", b);
    return 0;
}