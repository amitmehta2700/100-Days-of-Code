#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *infoFile, *outputFile;
    char ch;

    infoFile = fopen("info.txt", "r");
    if (infoFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(infoFile);
        return 1;
    }

    while ((ch = fgetc(infoFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    printf("All lowercase letters have been converted to uppercase and saved in output.txt\n");

    fclose(infoFile);
    fclose(outputFile);

    return 0;
}
