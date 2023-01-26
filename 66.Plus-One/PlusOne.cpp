#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        
        while(digits[i]==9&&i>=0)
        {
            if(i==0&&digits[i]==9)
            {
                digits[i]=1;
                digits.push_back(0);
                return digits;
            }
            digits[i]=0;
            i--;
        }
        if(digits[i]!=9) digits[i]+=1;
        
        
        
        return digits;
    }

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> digits(n);
    for(int i=0;i<n;i++)
    {
        cin>>digits[i];
    }
    vector<int> ans=plusOne(digits);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
}