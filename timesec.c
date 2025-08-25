#include<stdio.h>
int main() {
int hours,minutes,seconds,time;
printf("Enter time in seconds:");
scanf("%d",&time);
hours = time / 3600;
minutes = (time % 3600) / 60;
seconds = time % 60;
printf("Time is %d hours, %d minutes and %d seconds\n", hours, minutes, seconds);
return 0;
}