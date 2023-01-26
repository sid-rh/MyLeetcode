#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
Approach
inside a loop find the target element and remove it and shit the array 1 element back, replace last element with INTMIN
if element not found iterate the pointer
*/
int removeElement(vector<int>& nums, int val) {
        int i=0;
        int ans=0;
        int n=nums.size();
        while(i<n&&nums[i]!=INT_MIN)
        {         
            if(nums[i]==val)
            {
                for(int j=i+1;j<n;j++)
                {
                    nums[j-1]=nums[j];
                    
                }
                nums[n-1]=INT_MIN;
            }
            else
            {
                i++;
            }
        }
        ans=i;
        return ans;
    }

int main()
{
    int n,val;
    
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"Enter the value: ";
    cin>>val;
    int r=removeElement(nums,val);
    for(int i=0;i<r;i++)
    {
        cout<<nums[i]<<" ";
    }

}