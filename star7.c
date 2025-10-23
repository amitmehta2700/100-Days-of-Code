#include <stdio.h>

int main(void) {
    int groups[] = {1, 3, 5, 3, 1};
    int gcount = sizeof(groups) / sizeof(groups[0]);

    for (int i = 0; i < gcount; ++i) {
        for (int j = 0; j < groups[i]; ++j)
            puts("*");
        if (i != gcount - 1)
            putchar('\n'); // blank line between groups
    }

    return 0;
}
