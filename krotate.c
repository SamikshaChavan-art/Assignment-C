#include <stdio.h>

int main()
{
    int a[100], temp[100], n, k, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number of positions to rotate left (k): ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < n - k; i++)
        temp[i] = a[i + k];

    for (int j = 0; j < k; j++, i++)
        temp[i] = a[j];

    for (i = 0; i < n; i++)
        a[i] = temp[i];

    printf("Array after left rotation:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
