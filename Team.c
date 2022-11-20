#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int solved = 0;
    for (int i = 0; i < n; i++)
    {
        int array[3];
        int is_know = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &array[j]);
            if (array[j] == 1)
            {
                is_know++;
            }
        }
        if (is_know > 1)
        {
            solved++;
        }
    }
    printf("%d", solved);
    return 0;
}