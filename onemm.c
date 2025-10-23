#include<stdio.h>
int 
main() {
    int i, max, min;
    int A[5] = {10,20,30,40,50};
    max = A[0];
    min = A[0];
    for(i=1;i<5;i++){
        if(A[i] > max) {
            max = A[i];
        }else if(A[i] < min) {
            min = A[i];
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}