#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    while (m > 0)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
        m--;
    }
    printf("%d", n);
}