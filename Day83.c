#include <stdio.h>

int main() {
    enum Months {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    char *monthNames[] = {"January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"};

    printf("Months and their number of days:\n");
    for (int m = JANUARY; m <= DECEMBER; m++) {
        printf("%s: %d days\n", monthNames[m], daysInMonth[m]);
    }

    return 0;
}
