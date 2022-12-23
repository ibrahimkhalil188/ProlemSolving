#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int count = 0;
    while (n <= m)
    {
        count++;
        n = n * 3;
        m = m * 2;
    }
    printf("%d", count);
}