#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
    Approach: start from the back, cases are: both 1 and carry 1->ans is 1 and carry remains 1; both 1 carry 0 ans is 0 and carry 0 carry 1 and any one of a or b 0 ans is 0 carry remains 1
*/

string addBinary(string a, string b)
{
    string ans = "";
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {

        if (a[i] == '1' && b[j] == '1')
        {
            if (carry == 0)
                ans = "0" + ans;
            else
                ans = "1" + ans;
            carry = 1;
        }
        else if (a[i] == '0' && b[j] == '0')
        {
            if (carry == 0)
                ans = "0" + ans;
            else
            {
                ans = "1" + ans;
                carry = 0;
            }
        }
        else
        {
            if (carry == 0)
                ans = "1" + ans;
            else
                ans = "0" + ans;
        }
        i--;
        j--;
    }
    while (i >= 0)
    {
        if (a[i] == '1')
        {
            if (carry == 0)
                ans = "1" + ans;
            else
                ans = "0" + ans;
        }
        else
        {
            if (carry == 0)
                ans = "0" + ans;
            else
            {
                ans = "1" + ans;
                carry = 0;
            }
        }
        i--;
    }
    while (j >= 0)
    {
        if (b[j] == '1')
        {
            if (carry == 0)
                ans = "1" + ans;
            else
                ans = "0" + ans;
        }
        else
        {
            if (carry == 0)
                ans = "0" + ans;
            else
            {
                ans = "1" + ans;
                carry = 0;
            }
        }
        j--;
    }
    if (carry == 1)
        ans = "1" + ans;
    return ans;
}

int main()
{

    string a = "";
    string b = "";

    cout << "Enter the a: ";
    cin >> a;
    cout << "Enter the b: ";
    cin >> b;

    string ans = addBinary(a, b);

    cout << ans << endl;
}