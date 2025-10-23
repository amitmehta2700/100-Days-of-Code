#include<stdio.h>

int main() {
    int a[5] = {1,2,3,4,5};
    int i,even,e,o,odd;
    for(i=0;i<5;i++){
        if(a[i]%2==0){
            even=a[i];
            printf("Even number: %d\n",even);
            e++;
        }else{
            odd=a[i];
            printf("Odd number: %d\n",odd);
            o++;
            
        }
    }
    printf("Total even numbers: %d\n", e);
    printf("Total odd numbers: %d\n", o);
    return 0;
}
   