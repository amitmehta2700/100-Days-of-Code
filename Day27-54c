#include <stdio.h>

int main(void) {
    int mid = 4;  int i, j, spaces, stars;

    // top half including middle line
    for (i = 1; i <= mid; ++i) {
        spaces = mid - i;
        stars  = 2 * i - 1;
        for (j = 0; j < spaces; ++j) putchar(' ');
        for (j = 0; j < stars;  ++j) putchar('*');
        putchar('\n');
    }

    // bottom half
    for (i = mid - 1; i >= 1; --i) {
        spaces = mid - i;
        stars  = 2 * i - 1;
        for (j = 0; j < spaces; ++j) putchar(' ');
        for (j = 0; j < stars;  ++j) putchar('*');
        putchar('\n');
    }

    return 0;
}
