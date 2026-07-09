#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100];
    int i = 0, start = 0;
    int maxLen = 0, len = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
        i++;
    }

    strncpy(longest, str + maxStart, maxLen);
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}