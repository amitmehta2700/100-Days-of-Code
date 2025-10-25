#include <stdio.h>

int countChars(const char *s) {
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}

int main(void) {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = countChars(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        printf("Length of the string: %d\n", len);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
