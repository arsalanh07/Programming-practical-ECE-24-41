#include <stdio.h>

int main() {
    int i = 2, j, result;

    while (i <= 10) {
        j = 1;
        printf("Multiplication table for %d:\n", i);
        while (j <= 10) {
            result = i * j;
            printf("%d x %d = %d\n", i, j, result);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}