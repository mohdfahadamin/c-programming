#include <stdio.h>
void main()
{
    int A[5], i, k, flag = 0;
    printf("enter the element into the array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("enter the key element: ");
    scanf("%d", &k);

    for (i = 0; i < 5; i++)
    {
        if (k == A[i])
        {
            // printf("%d is found at position %d\n", k, i + 1);
            // flag++;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is found at position %d\n", k, i + 1);
    }
    else
    {
        printf("%d is not found\n", k);
    }
}