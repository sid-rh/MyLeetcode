#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int titleToNumber(string columnTitle)
{
    int i = columnTitle.size() - 1;
    int j = 0;
    int ans = 0;
    while (i >= 0)
    {
        int temp = columnTitle[i] % 65 + 1;
        ans += temp * pow(26, j);
        j++;
        i--;
    }
    return ans;
}

int main()
{

    string word = "";
    cout << "Enter the string: ";
    cin >> word;

    int ans = titleToNumber(word);

    cout << ans << endl;
}