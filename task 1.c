#include<stdio.h>

main() 
{
    int n, i;
    026967 

  
    printf("Enter the array's size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array's elements:\n");
    for(i = 0; i < n; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Negative elements from the array: ");
    for(i = 0; i < n; i++) 
	{
        if(arr[i] < 0) 
		{
            printf("%d ", arr[i]);
        }
    }

}
