#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 1; i < length; i++)
    {
        for (int j = 10; j >= 1; j--)
        {
            printf("%5d", j);
        }
        return 0;
    }
    
}