#include <stdio.h>
#include <string.h>
int main()
{
    char ch[105];
    scanf("%s", ch);
    int uppercase = 0;
    int lowercase = 0;
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] >= 65 && ch[i] <= 90)
        {
            uppercase++;
        }
        else if (ch[i] >= 97 && ch[i] <= 122)
        {
            lowercase++;
        }
    }
    if (uppercase > lowercase)
    {
        for (int i = 0; i < strlen(ch); i++)
        {
            if (ch[i] > 90)
                printf("%c", ch[i] - 32);
            else
                printf("%c", ch[i]);
        }
    }
    else if (uppercase <= lowercase)
    {
        for (int i = 0; i < strlen(ch); i++)
        {
            if (ch[i] <= 90)
                printf("%c", ch[i] + 32);
            else
                printf("%c", ch[i]);
        }
    }
}