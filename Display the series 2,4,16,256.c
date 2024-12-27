#include <stdio.h>

int main() {
    int n, i;
    int num = 2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", num);
        num *= num;
    }
    
    return 0;
}