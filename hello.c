for (i = 0; i < n; i++)
{
    key = a[i];
    j = i - 1;
    while (j >= 0 && j > key)
    {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = key;
}

for (i = 0; i < n; i++)
{
    key = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > key)
    {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = key;
}
