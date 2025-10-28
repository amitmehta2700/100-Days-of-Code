// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseChars(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseEachWord(char *sentence) {
    char *wordBegin = NULL;
    char *p = sentence;

    while (*p) {
        if (wordBegin == NULL && !isspace((unsigned char)*p)) {
            // start of a word
            wordBegin = p;
        }
        if (wordBegin && (isspace((unsigned char)*p) || *(p+1) == '\0')) {
            // end of word at p (or p+1 is end of string)
            char *wordEnd = (isspace((unsigned char)*p) ? p-1 : p);
            reverseChars(wordBegin, wordEnd);
            wordBegin = NULL;
        }
        p++;
    }
}

int main(void) {
    char sentence[256];

    printf("Enter a sentence:\n");
    if (fgets(sentence, sizeof(sentence), stdin)) {
        // remove trailing newline if present
        size_t len = strlen(sentence);
        if (len > 0 && sentence[len-1] == '\n') {
            sentence[len-1] = '\0';
        }

        reverseEachWord(sentence);

        printf("Result: %s\n", sentence);
    }

    return 0;
}
