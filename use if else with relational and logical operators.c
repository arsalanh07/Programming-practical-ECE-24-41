#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        printf("%d is the largest number\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d is the largest number\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("%d is the largest number\n", num3);
    } else {
        printf("There is no distinct largest number\n");
    }

    if (num1 == num2 || num1 == num3) {
        printf("num1 is equal to another number\n");
    } else {
        printf("num1 is not equal to any other number\n");
    }

    return 0;
}