#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 6; i++) {
        for(j = 1; j <= 5; j++) {
            printf("%d ", j);
        }
    }

    return 0;
}