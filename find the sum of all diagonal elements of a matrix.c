#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    scanf("%d", &rows);
    scanf("%d", &cols);

    int matrix[rows][cols];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        if(i < cols) {
            sum += matrix[i][i];
        }
    }

    printf("%d", sum);

    return 0;
}