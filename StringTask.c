#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    scanf("%s", ch);
    int index_new = 0;
    for (int i = 0; i < strlen(ch); i++)
    {
        strlwr(ch);
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'y')
        {
            continue;
        }
        else
        {
            index_new++;
            printf(".%c", ch[i]);
        }
    }
}