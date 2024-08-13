#include <stdio.h>

int main() 
{
    int rows, cols, i, j;

    // Ask the user for the size of the array (rows and columns)
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols], transpose[cols][rows];

    // Ask the user for the elements of the array
    printf("Enter array's elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate the transpose of the matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    // Print the transpose matrix
    printf("The transpose of the matrix is:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
