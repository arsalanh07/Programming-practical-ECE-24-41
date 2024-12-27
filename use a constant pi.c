#include <stdio.h>

#define PI 3.14159f

float area(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius = 5.0;
    printf("Radius: %.2f\n", radius);
    printf("Area of circle with radius %.2f: %.2f\n", radius, area(radius));
    return 0;
}