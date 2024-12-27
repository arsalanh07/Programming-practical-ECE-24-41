#include <stdio.h>

int main() {
    int n, i = 0;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += 1.0 / (1 << i);
        i++;
    }

    printf("Sum of the series is: %.6f\n", sum);
    return 0;
}