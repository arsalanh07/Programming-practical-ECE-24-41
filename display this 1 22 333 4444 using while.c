#include <stdio.h>

int main() {
    int n, i = 1, j;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while (i <= n) {
        j = 1;
        while (j <= i) {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}