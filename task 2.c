#include<stdio.h>

main() 
{
    int rows, colas, i, j, max;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &colas);

    int arr[rows][colas];

    printf("Enter array's elements:\n");
    for(i = 0; i < rows; i++) 
    	{
        for(j = 0; j < colas; j++)
		 {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];

    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < colas; j++)
		 {
            if(arr[i][j] > max) 
			{
                max = arr[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", max);

}
