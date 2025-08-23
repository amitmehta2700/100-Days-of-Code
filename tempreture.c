#include<stdio.h>
int main() {
    float C,F;
    printf("Enter tempreture in celsius");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("Tempreture in fahrenheit is %f",F);
}