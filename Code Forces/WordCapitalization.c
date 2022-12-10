#include <stdio.h>
int main()
{
    char ch[1005];
    scanf("%s", ch);
    if (ch[0] >= 97 && ch[0] <= 122)
    {
        ch[0] = ch[0] - 32;
    }
    printf("%s", ch);
}