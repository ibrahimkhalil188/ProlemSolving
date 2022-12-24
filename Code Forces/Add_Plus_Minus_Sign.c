#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        char ch[n];
        scanf("%s", &ch);
        int sum = 1;
        for (int i = 0; i < n; i++)
        {

            if (i == 0 && ch[i] == '0')
            {
                continue;
            }
            else if (i == 0 && ch[i] == '1')
            {
                sum++;
            }
            else
            {
                if (ch[i] == '0')
                    printf("+");
                else if (ch[i] == '1' && sum == 2)
                {
                    printf("-");
                    sum = 1;
                }
                else
                {
                    printf("+");
                    sum++;
                }
            }
        }
        printf("\n");
    }
}