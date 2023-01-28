#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex) {
        vector<int> a(rowIndex+1);

        a[0]=1;

        for(int i=1;i<=rowIndex;i++)
        {
            vector<int> temp(rowIndex+1);
            temp[0]=1;
            for(int j=1;j<=i;j++)
            {
                if(j==i) temp[j]=1;
                else
                {
                    temp[j]=a[j-1]+a[j];
                }
            }
            a=temp;
        }
        return a;
    }

int main()
{
    int rowIndex;
    cout<<"Enter the number of rows to be returned: ";
    cin>>rowIndex;
    vector<int> ans=getRow(rowIndex);
    for(auto a: ans) cout<<a<<" ";
    
}