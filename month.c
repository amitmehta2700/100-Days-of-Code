#include<stdio.h>
int main() {
    int monthnumber;
    printf("ENTER THE MONTH NUMBER FROM (1-12): ");
    scanf("%d", &monthnumber);
    switch(monthnumber) {
        case 1:
            printf("January\n");
            printf("No of days = 31\n");
            break;
        case 2:
            printf("February\n");
            printf("No of days = 28/29\n");
            break;
        case 3:
            printf("March\n");
            printf("No of days = 31\n");
            break;
        case 4:
            printf("April\n");
            printf("No of days = 30\n");
            break;
        case 5:
            printf("May\n");
            printf("No of days = 31\n");
            break;
        case 6:
            printf("June\n");
            printf("No of days = 30\n");
            break;
        case 7:
            printf("July\n");
            printf("No of days = 31\n");
            break;
        case 8:
            printf("August\n");
            printf("No of days = 31\n");
            break;
        case 9:
            printf("September\n");
            printf("No of days = 30\n");
            break;
        case 10:
            printf("October\n");
            printf("No of days = 31\n");
            break;
        case 11:
            printf("November\n");
            printf("No of days = 30\n");
            break;
        case 12:
            printf("December\n");
            printf("No of days = 31\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 12.\n");
    }
}
