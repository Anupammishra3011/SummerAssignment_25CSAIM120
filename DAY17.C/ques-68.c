#include <stdio.h>

int main() {
    int a[100], b[100];
    int n1, n2, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    printf("Common elements are:\n");

    for(i = 0; i < n1; i++) {
        int alreadyPrinted = 0;

        /* Check if element was already printed */
        for(k = 0; k < i; k++) {
            if(a[i] == a[k]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        for(j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}