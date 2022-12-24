#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int present = 0;
    int max_p = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        present = (present - a) + b;
        if (present > max_p)
            max_p = present;
    }
    printf("%d", max_p);
}