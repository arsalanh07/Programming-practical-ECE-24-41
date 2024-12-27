#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    i = 1;
    while(i <= n) {
        sum += i;
        i++;
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}