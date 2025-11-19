// Convert date from dd/mm/yyyy to dd-MMM-yyyy format.
#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    char monthStr[4];

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    switch(mm) {
        case 1:  sprintf(monthStr, "Jan"); break;
        case 2:  sprintf(monthStr, "Feb"); break;
        case 3:  sprintf(monthStr, "Mar"); break;
        case 4:  sprintf(monthStr, "Apr"); break;
        case 5:  sprintf(monthStr, "May"); break;
        case 6:  sprintf(monthStr, "Jun"); break;
        case 7:  sprintf(monthStr, "Jul"); break;
        case 8:  sprintf(monthStr, "Aug"); break;
        case 9:  sprintf(monthStr, "Sep"); break;
        case 10: sprintf(monthStr, "Oct"); break;
        case 11: sprintf(monthStr, "Nov"); break;
        case 12: sprintf(monthStr, "Dec"); break;
        default: printf("Invalid month"); return 0;
    }
    printf("%02d-%s-%d\n", dd, monthStr, yyyy);

    return 0;
}
