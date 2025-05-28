#include <stdio.h>

int main() {
    int rows = 2, cols = 3;
    double matrix[2][3] = {
        {1.5, 2.3, 3.7},
        {4.2, 5.1, 6.8}
    };

    double sum = 0.0;
    int i, j;
    
    printf("Matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%.2lf\t", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }

    double average = sum / (rows * cols);

    printf("\nSum of all elements: %.2lf\n", sum);
    printf("Average of all elements: %.2lf\n", average);

    return 0;
}
