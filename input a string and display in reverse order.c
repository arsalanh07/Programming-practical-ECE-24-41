#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    printf("The string in reverse order is: ");
    for(i = length - 1; i >= 0; i--) {
        if(str[i] != '\n') {
            printf("%c", str[i]);
        }
    }

    return 0;
}