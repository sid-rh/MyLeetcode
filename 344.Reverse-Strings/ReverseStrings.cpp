#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    int i = 0, j = s.size() - 1;
    while (i <= j)
    {
        swap(s[i++], s[j--]);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<char> strs(n);
    cout << "Enter the words: ";
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
    }

    reverseString(strs);

    for (auto a : strs)
    {
        cout << a << " ";
    }
}