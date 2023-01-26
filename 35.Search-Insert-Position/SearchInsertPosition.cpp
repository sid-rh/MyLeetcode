#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        int ans=0;
        if(target<=nums[0]) return 0;
        else if(target>nums[n-1]) return n;
        else if(target==nums[n-1]) return n-1;
        while(s<e)
        {
            if(nums[mid]>target)
            {
                e=mid;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {   
                return mid;
            }
            mid=s+(e-s)/2;
        }
        ans=mid;
        return ans;
    }

int main()
{
    int target, n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>n;
    }
    cout<<"Enter the target: ";
    cin>>target;
    cout<<searchInsert(nums,target);
}
