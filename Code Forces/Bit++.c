#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        char ch[20];
        scanf("%s", &ch);
        if (ch[1] == '+')
            x += 1;
        else
            x -= 1;
    }
    printf("%d", x);
}