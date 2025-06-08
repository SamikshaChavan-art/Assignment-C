#include <stdio.h>

int main()
{

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8};
    int length = sizeof(a) / sizeof(a[0]);
    int i, j, k;

    for (i = 0; i < length; i++)
    {
        for (j = i + 1; j < length;)
        {
            if (a[i] == a[j])
            {

                for (k = j; k < length - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                length--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
