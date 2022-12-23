#include <stdio.h>
int main()
{
    char ch[100];
    scanf("%s", &ch);
    int length = strlen(ch);
    int freq[4];
    for (int i = 1; i <= 3; i++)
        freq[i] = 0;
    for (int i = 0; i <= length; i += 2)
        freq[ch[i] - 48] = freq[ch[i] - 48] + 1;
    int number = length / 2;
    for (int i = 1; i <= 3; i++)
        for (int j = freq[i]; j >= 1; j--)
        {
            if (number < 1)
            {
                printf("%d", i);
                number--;
            }
            else
            {
                printf("%d+", i);
                number--;
            }
        }
}