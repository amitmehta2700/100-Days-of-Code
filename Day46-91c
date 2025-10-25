#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    // Convert to lowercase to handle both cases
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    while (str[i] != '\0') {
        if (!isVowel(str[i])) {
            result[j++] = str[i];
        i++;
    }
    result[j] = '\0';
    printf("String after removing vowels: %s", result);
    return 0;
}
