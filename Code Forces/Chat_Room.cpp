#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string new_string = "hello";
    int index = 0;
    int flag = 1;
    for (int i = 0; i < new_string.length(); i++)
    {
        int match = 0;
        for (int j = 0; j < s.length(); j++)
        {

            if (new_string[i] == s[j])
            {
                match = 1;
                break;
            }
        }
        if (match == 1)
            flag = 1;
        else
            flag = 0;
    }
    if (flag == 1)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
    return 0;
}