#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    i = 1;
    while(i <= n) {
        product *= i;
        i++;
    }

    printf("The product of the series is: %lld\n", product);

    return 0;
}