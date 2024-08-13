#include<stdio.h>

main() 
{
    int rows, cols, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter array's elements:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array elements and row sums:\n");
    for(i = 0; i < rows; i++) 
	{
        int rowSum = 0;
        for(j = 0; j < cols; j++) 
		{
            printf("%d ", arr[i][j]);
            rowSum += arr[i][j];
        }
        printf(" | Row %d sum: %d\n", i + 1, rowSum);
    }

    printf("Column sums:\n");
    for(j = 0; j < cols; j++) 
	{
        int colSum = 0;
        for(i = 0; i < rows; i++) 
		{
            colSum += arr[i][j];
        }
        printf("Column %d sum: %d\n", j + 1, colSum);
    }

}
