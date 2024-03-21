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
    printf("\nlist before bubble sort: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
    }
    printf("\nlist after bubble sort: \n");
    for (i = 0; i < 5; i++)
    {

        printf("%d ", a[i]);
    }
}