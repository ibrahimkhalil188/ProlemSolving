#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char ch[n];
    scanf("%s", ch);
    int red = 0;
    int green = 0;
    int blue = 0;
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == ch[i + 1])
        {
            if (ch[i] == 114)
                red++;
            else if (ch[i] == 103)
                green++;
            else
                blue++;
        }
    }
    if (red > green && red > blue)
        printf("%d", red);
    else if (green > red && green > blue)
        printf("%d", green);
    else
        printf("%d", blue);
    return 0;
}