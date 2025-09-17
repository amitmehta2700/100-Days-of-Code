#include<stdio.h>
int main() {
    int units,bill=0;
    printf("enter the number of units consumed: ");
scanf("%d",&units);
if(units<=100)
{
    bill=units*5;
    printf("bill=%d\n", bill);
}
else if(units>100)
{
    bill=100*5+(units-100)*7;;
    printf("bill=%d\n", bill);
}
else if(units>200)
{
    bill=100*5+100*7+(units-200)*10;
    printf("bill=%d\n", bill);
}
else if (units>300)
{
    bill=100*5+100*7+100*10+(units-300)*12;
    printf("bill=%d\n", bill);
}
return 0;
}