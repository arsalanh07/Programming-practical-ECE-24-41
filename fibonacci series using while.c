#include <stdio.h>

int main() {
    int n, a = 0, b = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    int count = 1;
    while (count <= n) {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        count++;
    }

    printf("\n");
    return 0;
}