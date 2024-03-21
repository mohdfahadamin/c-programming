#include <stdio.h>
void main()
{
    int n = 5;
    int A[n], i, k, l, h, mid, flag;
    l = 0;
    h = n - 1;
    printf("enter the element into the array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("enter the key element: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        mid = (l + h) / 2;
        if (k == A[mid])
        {
            flag = 1;
            break;
        }
        else if (k > A[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    if (flag == 1)
    {
        printf("%d is found at position %d\n", k, mid + 1);
    }
    else
    {
        printf("%d is not found\n", k);
    }
}