#include <stdio.h>
void main()
{
    int n = 5, t, key, a[n];
    printf("enter the element: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < n; i++)
    {
        key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}