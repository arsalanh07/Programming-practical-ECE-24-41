#include <stdio.h>
#include <math.h>

int main() {
    double num = 25.0;
    double result;

    result = sqrt(num);
    printf("Square root of %.2f is %.2f\n", num, result);

    result = pow(num, 2);
    printf("%.2f raised to the power of 2 is %.2f\n", num, result);

    result = sin(M_PI / 4);
    printf("Sin of 45 degrees is %.2f\n", result);

    return 0;
}