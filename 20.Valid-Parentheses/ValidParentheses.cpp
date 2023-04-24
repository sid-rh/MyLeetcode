#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 Approach: Use a stack. Iterate through the string and insert any opening parenthesis in it. If closing parenthesis is encountered and the stack is empty return false, if matching closing parenthesis is found, then pop it. If the stack ends up to be empty return true as all parenthesis is matched else return false.

*/

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