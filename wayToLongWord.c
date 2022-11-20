#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    char ch[100];
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &ch);
        int ch_length = strlen(ch) - 1;
        if (ch_length < 10)
            printf("%s\n", ch);
        else
            printf("%c%d%c\n", ch[0], ch_length - 1, ch[ch_length]);
    }
    return 0;
}