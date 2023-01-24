#include<iostream>
#include<vector>
using namespace std;

vector<int> TwoSum(vector<int>&nums, int target)
{
    vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }

        }
        return ans;
}

int main()
{
    vector<int> nums;
    int target, n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the target: ";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<int> ans= TwoSum(nums,target);
    for(auto i: ans)
    {
        cout<<i<<endl;
    }


}