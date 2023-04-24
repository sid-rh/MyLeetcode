#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int lengthOfLastWord(string s)
{
    int ans = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        while (i >= 0 && s[i] == ' ')
        {
            i--;
        }
        while (i >= 0 && s[i] != ' ')
        {
            ans++;
            i--;
        }
        break;
    }
    return ans;
}

int main()
{

    string word = "";
    cout << "Enter the string: ";
    cin >> word;

    int ans = lengthOfLastWord(word);

    cout << ans << endl;
}