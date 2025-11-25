#include <stdio.h>

int main() {
    enum Colors {RED, GREEN, BLUE, YELLOW, ORANGE};

    char *colorNames[] = {"RED", "GREEN", "BLUE", "YELLOW", "ORANGE"};

    printf("Enum names and their integer values:\n");

    for (int i = RED; i <= ORANGE; i++) {
        printf("%s = %d\n", colorNames[i], i);
    }

    return 0;
}
