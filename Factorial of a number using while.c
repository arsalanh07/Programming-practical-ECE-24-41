#include <stdio.h>

int main() {
    int n, i = 1;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n) {
        factorial *= i;
        i++;
    }

    printf("The factorial of %d is: %lld\n", n, factorial);

    return 0;
}