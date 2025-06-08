#include <stdio.h>
int main()
{
    int a[10] = {2, 0, 4, 5, 0, 0, 0, 1, 10, 0};
    int length = sizeof(a) / sizeof(a[0]);
    int b[10];
    int cnt=0;

    for (int i = 0; i < length; i++)
    {
        if (a[i] != 0)
        {
            b[cnt] = a[i];
            cnt++;
        }
    }

    for (int i = 0; i < length; i++)
    {
        if (a[i] == 0)
        {
            b[cnt] = a[i];
            cnt++;
        }
    }

    printf("After Sorting:");
    for (int i = 0; i < length; i++)
    {
        printf("%5d", b[i]);
    }
}