#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s)
{
    int i = 0;
    int j = s.size() - 1;
    unordered_map<char, int> mp;

    for (auto a : s)
    {
        if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U')
        {
            mp[a]++;
        }
    }

    while (i < j)
    {
        if (mp.count(s[i]) && mp.count(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        if (!mp.count(s[i]))
            i++;
        if (!mp.count(s[j]))
            j--;
    }
    return s;
}

int main()
{

    string b = "";

    cout << "Enter the b: ";
    cin >> b;

    string ans = reverseVowels(b);

    cout << "ans is " << ans << endl;
}