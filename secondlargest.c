#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(a) / sizeof(a[0]);
    int max = a[0];
    int secondlargest = a[0];

    for (int i = 1; i < length; i++)
    {

        if (a[i] > max)
        {
            secondlargest = max;
            max = a[i];
        }
        else if (a[i] > secondlargest && a[i] != max)
        {
            secondlargest = a[i];
        }
    }

    printf("Second Largest is %d", secondlargest);

    return 0;
}