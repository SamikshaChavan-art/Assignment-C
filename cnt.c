#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 2, 4, 5, 6, 6, 7, 8};
    int length = sizeof(a) / sizeof(a[0]);
    int visited[10] = {0}; 

    for (int i = 0; i < length; i++)
    {
        if (visited[i] == 1)
            continue;

        int cnt = 1; 

        for (int j = i + 1; j < length; j++)
        {
            if (a[i] == a[j])
            {
                cnt++;
                visited[j] = 1; 
            }
        }

        printf("%d is %d times in array\n", a[i], cnt);
    }

    return 0;
}
