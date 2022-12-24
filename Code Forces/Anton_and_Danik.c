#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char ch[n];
    scanf("%s", ch);
    int anton = 0;
    int danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == 'A')
            anton++;
        else
            danik++;
    }
    if (anton > danik)
        printf("Anton");
    else if (danik > anton)
        printf("Danik");
    else
        printf("Friendship");
}