#include <stdio.h>
int main()
{
    char str[1000005];
    scanf("%s", str);
    int n = strlen(str), frequency[27];
    for (int i = 0; i < 27; i++)
    {
        frequency[i] = 0;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("1st line %d\n", frequency[i]);
        printf("2st line %d\n", frequency[str[i]]);
        printf("3st line %d\n", frequency[str[i] - 'A']);
        printf("4st line %d\n", frequency[(str[i] - 'A') + 1]);
        printf("5st line %d\n", frequency[(str[i] - 'A') + 1]++);
    }
}