#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    int j = 0;
    for (int i = 0; i < t.size() && j < s.size(); i++)
    {
        if (s[j] == t[i])
            j++;
    }
    if (j == s.size())
        return true;
    else
        return false;
}

int main()
{
    string a = "";
    string b = "";

    cout << "Enter the a: ";
    cin >> a;
    cout << "Enter the b: ";
    cin >> b;

    bool ans = isSubsequence(a, b);

    cout << ans << endl;
}