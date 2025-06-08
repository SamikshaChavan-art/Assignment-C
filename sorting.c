#include <stdio.h>
int main()
{
    int arr[10] = {2, 9, 1, 7, 4, 6, 3, 5, 8, 10};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array");
    for (int i = 0; i < length; i++)
    {
        printf("%5d", arr[i]);
    }

    // Sorting using bubble Sort
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length-1; j++)
        {
            if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
        }
        
        
    }
    printf("\nAfter Sorting");
    for (int i = 0; i < length; i++)
    {
        printf("%5d", arr[i]);
    }
    return 0;
}