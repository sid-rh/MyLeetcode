//inputs-> n=No of people and an array of arrays (inner arrays of size 2).
// [[a,b],[b,c]] => [a,b] implies a trusts b. 
//A judge trusts no one and a person trusts everyone. There's only one judge, find him.

// solution
//make two arrays of size n+1 to accomodate 1 to n numbers, arrays are trusts and trusted by
//trusts[] indicate out degree and trustedBy[] indicates indegree
//for a number to be judged it must be trusted by all members(other than itself) and must not trust anyone else.
#include<iostream>
#include<vector>
using namespace std;
int FindJudge(int n, vector<vector<int>>&trust)
{
     vector<int>trusts(n+1);
        vector<int>trustedBy(n+1);

        for(auto Person:trust)
        {
            trusts[Person[0]]++;
            trustedBy[Person[1]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(trusts[i]==0&&trustedBy[i]==n-1) return i;
        }
        return -1;

}

int main()
{
    int n,m;
    vector<vector<int>> arr;
    cout<<"Enter the number of trust arrays: ";
    cin>>m;
    cout<<"Enter the number of members: ";
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    return FindJudge(n,arr);
    
}