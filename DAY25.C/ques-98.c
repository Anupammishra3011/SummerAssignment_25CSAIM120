#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j;
    int found[256] = {0};   // To avoid printing duplicates

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    printf("Common characters: ");

    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j] && found[(unsigned char)str1[i]] == 0) {
                printf("%c ", str1[i]);
                found[(unsigned char)str1[i]] = 1;
                break;
            }
        }
    }

    return 0;
}