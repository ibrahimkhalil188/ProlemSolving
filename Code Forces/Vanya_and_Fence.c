#include <stdio.h>
int main()
{
    int n, h;
    scanf("%d%d", &n, &h);
    int array[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > h)
        {
            count = count + 2;
        }
        else
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}