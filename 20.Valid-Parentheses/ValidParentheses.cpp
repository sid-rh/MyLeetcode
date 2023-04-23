#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (auto a : s)
    {
        if (a == '(' || a == '[' || a == '{')
        {
            st.push(a);
        }

        else
        {

            if (a == ')')
            {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                    return false;
            }
            if (a == ']')
            {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                    return false;
            }
            if (a == '}')
            {
                if (!st.empty() && st.top() == '{')
                    st.pop();
                else
                    return false;
            }
        }
    }
    if (st.empty())
        return true;
    else
        return false;
}

int main()
{

    string word = "";
    cout << "Enter the string: ";
    cin >> word;

    bool ans = isValid(word);

    cout << ans << endl;
}