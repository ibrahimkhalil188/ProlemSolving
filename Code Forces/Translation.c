#include <stdio.h>
int main()
{
    char s[105];
    char t[105];
    scanf("%s%s", &s, &t);
    int length = strlen(s) - 1;
    int is_same = 1;
    for (int i = 0; i <= length; i++)
    {
        if (s[i] != t[length - i])
        {
            is_same = 0;
            break;
        }
    }
    if (is_same == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}