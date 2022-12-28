#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n + 1];
    int freq[n + 1];
    for (int i = 1; i < n; i++)
        cin >> array[i];
    for (int i = 1; i <= n; i++)
        freq[i] = 0;
    for (int i = 1; i < n; i++)
    {
        freq[array[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] != 1)
        {
            cout << i << " ";
        }
    }
}