#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[200];
    int vowels = 0, consonants = 0;
    int i = 0;
    char ch;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Input error\n");
        return 1;
    }

    while (str[i] != '\0') {
        ch = str[i];
        if (isalpha((unsigned char)ch)) {
            ch = tolower((unsigned char)ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
