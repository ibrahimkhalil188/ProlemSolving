#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n][3];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            scanf("%d", &array[i][j]);
            sum = sum + array[i][j];
        }
    }
    if (sum == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}