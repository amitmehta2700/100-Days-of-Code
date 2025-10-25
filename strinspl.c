#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, specialChars = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
   
    while (str[i] != '\0') {
        if (isspace((unsigned char)str[i])) {
            spaces++; 
        } else if (isdigit((unsigned char)str[i])) {
            digits++; 
        } else if (!isalnum((unsigned char)str[i])) {
            specialChars++; // Increment special character count
        }
        i++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specialChars);

    return 0;
}
