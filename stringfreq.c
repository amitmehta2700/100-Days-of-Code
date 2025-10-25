#include <stdio.h>

int main() {
    char str[200], target;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    printf("Enter the character to count: ");
    scanf("%c", &target); 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("Frequency of '%c': %d\n", target, count);

    return 0;
}
