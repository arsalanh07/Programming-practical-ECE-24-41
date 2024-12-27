#include <stdio.h>

int main() {
    int n, element, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for(int i = 0; i < n; i++) {
        if(arr[i] == element) {
            printf("Element found at index %d.\n", i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found.\n");
    }

    return 0;
}