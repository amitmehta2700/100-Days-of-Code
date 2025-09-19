#include<stdio.h>
int main() {
    int i, j, f;
    printf("Enter the number of whuch you want factorial: ");
    scanf("%d", &i);
    for(j=1; j<=i; j++)
{
    f=f*j;
}
printf("%d",f);
return 0;
}