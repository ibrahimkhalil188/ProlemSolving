#include <stdio.h>
int main()
{
    int array[6][6];
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (array[i][j] == 1)
            {
                int move = (abs(i - 3) + abs(j - 3));
                printf("%d", move);
            }
        }
        printf("\n");
    }
}