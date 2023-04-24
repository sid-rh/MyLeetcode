#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
approach: two pointers, no case sensitivity alpha numeric.
*/

bool isPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i <= j)
    {
        if (isalnum(s[i]) && isalnum(s[j]))
        {
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            i++;
            j--;
        }
        else
        {
            if (!isalnum(s[i]))
            {
                i++;
            }
            if (!isalnum(s[j]))
            {
                j--;
            }
        }
    }
    return true;
}

int main()
{

    string word = "";
    cout << "Enter the string: ";
    cin >> word;

    bool ans = isPalindrome(word);

    cout << ans << endl;
}