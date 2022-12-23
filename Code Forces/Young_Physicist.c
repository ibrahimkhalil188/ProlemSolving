#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n][3];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
            scanf("%d", &array[i][j]);
    }
    int sum = 0;
    for (int i = 1; i <= 3; i++)
    {
        int col_sum = 0;
        for (int j = 1; j <= n; j++)
        {
            col_sum = col_sum + array[j][i];
        }
        if (col_sum == 0)
            sum = 1;
        else
        {
            sum = 0;
            break;
        }
    }
    if (sum == 0)
        printf("NO");
    else
        printf("YES");
    return 0;
}