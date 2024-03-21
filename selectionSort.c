#include <stdio.h>

void main()
{
    int n = 5;
    int a[n], i, j, k;

    printf("enter the elements: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nlist before selection sort: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        {
            if (a[i] > a[j])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
    printf("\nlist after selection sort: \n");
    for (i = 0; i < 5; i++)
    {

        printf("%d ", a[i]);
    }
}