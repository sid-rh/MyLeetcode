#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
    Store magazine character counts in a map,compare with ransom note and decrement if match found else return false;
*/

bool canConstruct(string ransomNote, string magazine)
{
    int mag[26] = {0};

    for (auto c : magazine)
    {
        mag[c - 'a']++;
    }
    for (auto c : ransomNote)
    {
        if (mag[c - 'a'] == 0)
            return false;
        else
            mag[c - 'a']--;
    }
    return true;
}

int main()
{

    string a = "";
    string b = "";

    cout << "Enter the a: ";
    cin >> a;
    cout << "Enter the b: ";
    cin >> b;

    bool ans = canConstruct(a, b);

    cout << ans << endl;
}