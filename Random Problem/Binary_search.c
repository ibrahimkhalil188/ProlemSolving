#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[1000];
    int array_min = 1;
    int array_max = 1000;
    int array_mid = (array_max + array_min) / 2;
    for (int i = 0; i < 1000; i++)
        array[i] = i + 1;
    while (array[n - 1] != array_mid)
    {
        printf("%d %d\n", array[n - 1], array_mid);
        if (array[n] > array_mid)
        {
            array_min = n;
            array_mid = (array_max + array_min) / 2;
        }
        else
        {
            array_max = n;
            array_mid = (array_max + array_min) / 2;
        }
    }
    printf("%d", array_mid);
}
