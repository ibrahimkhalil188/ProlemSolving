#include <stdio.h>
int main()
{
    int k, n, w;
    scanf("%d%d%d", &k, &n, &w);
    int sum = 0;
    for (int i = 0; i <= w; i++)
        sum += i;
    int price = sum * k;
    int brow = price - n;
    if (brow > 0)
        printf("%d", brow);
    else
        printf("0");
}