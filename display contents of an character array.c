#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of characters: ");
    scanf("%d", &n);

    char arr[n];

    printf("Enter %d characters: ", n);
    for(int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }

    printf("The characters are: ");
    for(int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}