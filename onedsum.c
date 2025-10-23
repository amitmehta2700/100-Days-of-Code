#include<stdio.h>
int main() {
    int i, sum = 0;
    int A[5] = {10,20,30,40,50};
    for(i=0;i<5;i++){
        sum=sum+A[i];
    }
    printf("Sum: %d\n", sum);
    return 0;
}