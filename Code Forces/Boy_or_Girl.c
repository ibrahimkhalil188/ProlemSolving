#include <stdio.h>
int main()
{
    char ch[100];
    scanf("%s", ch);
    int freq[27];
    for (int i = 1; i < 27; i++)
        freq[i] = 0;

    for (int i = 0; i < strlen(ch); i++)
    {
        int index = ch[i] - 96;
        freq[index] = 1;
    }
    int sum = 0;
    for (int i = 1; i < 27; i++)
        if (freq[i] == 1)
            sum++;
    if (sum % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}