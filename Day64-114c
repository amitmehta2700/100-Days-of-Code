#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);

    int freq[256] = {0};   
    int left = 0, right = 0;
    int maxLen = 0;
    int n = strlen(s);

    while (right < n) {
        char c = s[right];
        freq[(int)c]++;

        while (freq[(int)c] > 1) {
            freq[(int)s[left]]--;
            left++;
        }

        int windowLen = right - left + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;

        right++;
    }

    printf("%d\n", maxLen);

    return 0;
}
