#include<stdio.h>
int main() {
    int angle1, angle2, angle3, sum;
    int a, b, c;
    printf("Enter the three angles of the triangle: ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    sum = angle1 + angle2 + angle3;

    if (sum == 180) {
        printf("THE TRIANGLE IS VALID (by angles).\n");
        printf("Enter the three sides of the triangle: ");
        scanf("%d%d%d", &a, &b, &c);
        if (a == b && b == c)
            printf("THE TRIANGLE IS EQUILATERAL.\n");
        else if (a == b || b == c || a == c)
            printf("THE TRIANGLE IS ISOSCELES.\n");
        else
            printf("THE TRIANGLE IS SCALENE.\n");

        if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
            printf("THE TRIANGLE IS RIGHT-ANGLED.\n");
    } else {
        printf("THE TRIANGLE IS NOT VALID (by angles).\n");
    }
    return 0;
}
