#include <stdio.h>

int main(void) {
    int rows = 5;
    for (int i = 0; i < rows; ++i) {
        int start = rows - i;
        for (int s = 0; s < rows - i - 1; ++s) putchar(' ');
        for (int num = start; num <= rows; ++num) printf("%d", num);
        putchar('\n');
    }
    return 0;
}