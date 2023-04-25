#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string convertToTitle(int n)
{
    string ans;
    while (n > 0)
    {
        n--;
        int curr = n % 26;
        char temp = 'A' + curr;
        n = n / 26;
        ans = temp + ans;
    }
    return ans;
}

int main()
{
    int n = 0;
    cout << "Enter the number: ";
    cin >> n;

    string ans = convertToTitle(n);

    cout << ans << endl;
}