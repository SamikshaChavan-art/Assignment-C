#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(a) / sizeof(a[0]);
    int max = 0;
    int min = 0;

    for (int i = 1; i < length; i++)
    {
        for (int j = 2; j < length; j++)
        {
            max = a[0];
            min = a[0];

            if (a[j] > max)
            {
                max = a[j];
            }
            else if (a[j] < min)
            {
                min = a[j];
            }
        }
    }

    printf("Max is %d\n", max);
    printf("Min is %d", min);
    return 0;
}