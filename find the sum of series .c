#include <stdio.h>

double sum_series(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    double result = sum_series(n);
    printf("The sum of the series is: %f\n", result);
    return 0;
}