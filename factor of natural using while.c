#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The factors of %d are: ", n);

    i = 1;
    while(i <= n) {
        if(n % i == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");

    return 0;
}