#include <stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    scanf("%s%s", &s1, &s2);
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
    }
    int order = 0;
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == s2[i])
        {
            order = 0;
            continue;
        }
        else if (s1[i] > s2[i])
        {
            order = 1;
            break;
        }
        else if (s1[i] < s2[i])
        {
            order = -1;
            break;
        }
    }
    printf("%d", order);
}