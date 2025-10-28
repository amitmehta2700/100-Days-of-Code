#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitials(const char *fullName) {
    int i = 0;
    int len = strlen(fullName);

    if (len == 0) {
        return;
    }

    // Print first letter (if it's an alphabet) in uppercase
    if (isalpha((unsigned char)fullName[0])) {
        printf("%c", toupper((unsigned char)fullName[0]));
    }

    // Walk through characters; if we find a space and next is a letter, print “.” then the letter
    for (i = 1; i < len; i++) {
        if (fullName[i] == ' ' && isalpha((unsigned char)fullName[i+1])) {
            printf(".%c", toupper((unsigned char)fullName[i+1]));
        }
    }
    printf("\n");
}

int main(void) {
    char name[100];

    printf("Enter full name:\n");
    if (fgets(name, sizeof(name), stdin)) {
        // remove newline if present
        size_t l = strlen(name);
        if (l > 0 && name[l-1] == '\n') {
            name[l-1] = '\0';
        }

        printf("Initials: ");
        printInitials(name);
    }

    return 0;
}
