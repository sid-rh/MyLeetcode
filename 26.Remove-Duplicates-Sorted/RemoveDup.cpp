#include<iostream>

#include<vector>
using namespace std;
/*
Approach
-> Use two pointers: one at 0 and one at 1;
-> increment pointer at 0 only when you find a dissimilar number and keep iterating j;
-> Idea is to find the first element that is not the same as the one pointed by the first pointer
-> Replace the number in front of the first pointer with the one pointed by the dissimilar number

*/

int removeDuplicates(vector<int>& nums) {
    int i=0;
    int ans=0;
    for(int j=1;j<nums.size();j++)
    {
        if(nums[j]!=nums[i])
        {
            i++;
            nums[i]=nums[j];
        }
    }
    ans=i+1;
    return ans;
    
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int r=removeDuplicates(nums);
    for(int i=0;i<r;i++)
    {
        cout<<nums[i]<<" ";
    }
}