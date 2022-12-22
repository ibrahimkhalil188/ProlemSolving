#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int array[50];
    int count = 0;
    for (int i = 1; i <= n; i++)
        scanf("%d", &array[i]);
    for (int i = 1; i <= n; i++)
    {
        if (array[i] >= array[m] && array[i] != 0)
            count++;
    }
    printf("%d", count);
    return 0;
}