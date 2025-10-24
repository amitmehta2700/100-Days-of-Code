#include <stdio.h>
#include <stdio.h>
int main() {
    int r, c;
    int sum = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int matrix[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  
        }
    }
    printf("\nSum of all elements in the matrix: %d\n", sum);

    return 0;
}
