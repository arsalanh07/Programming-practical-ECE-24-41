#include <stdio.h>

void reverse_digits(int n) {
    while (n != 0) {
        printf("%d", n % 10);
        n /= 10;
    }
}

int main() {
    int num;
    printf("Enter a natural number: ");
    scanf("%d", &num);
    
    printf("The digits in reverse order: ");
    reverse_digits(num);
    printf("\n");

    return 0;
}