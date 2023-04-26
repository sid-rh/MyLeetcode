#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
    Approach:
    two maps, store s->t in one map and t->s in the other, take a string t' and add characters of s in it, compare it with t;and compare the size of maps.
*/
bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> mp;
    unordered_map<char, char> mp2;
    for (int i = 0; i < s.size(); i++)
    {
        while (i < s.size() && !mp.count(s[i]))
        {
            mp[s[i]] = t[i];
            i++;
        }
    }
    string t1;
    for (int i = 0; i < s.size(); i++)
    {
        t1.push_back(mp[s[i]]);
    }
    for (int i = 0; i < t.size(); i++)
    {
        while (i < t.size() && !mp2.count(t[i]))
        {
            mp2[t[i]] = s[i];
            i++;
        }
    }

    return t == t1 && mp.size() == mp2.size();
}

int main()
{

    string a = "";
    string b = "";

    cout << "Enter the a: ";
    cin >> a;
    cout << "Enter the b: ";
    cin >> b;

    bool ans = isIsomorphic(a, b);

    cout << ans << endl;
}