/*
    Approach: 
    Start from end of both the arrays 
    if a number is greater, insert it at the back of the first array and decrement the pointer
    if we run out of pointers for the second array, we simply stop as the rest of the numbers are already present in the first array
    but if we reach the end of the first array we have to insert the rest of the second array in first array.
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(nums1[i]>=nums2[j])
            {
                nums1[k--]=nums1[i--];
                
            }
            else
            {
                nums1[k--]=nums2[j--];
                
            }
        }
        while(j>=0)
        {
            nums1[j]=nums2[j];
            j--;
        }
    }

int main()
{
    int n1,n2,m,n;
    vector<int> nums1,nums2;
    cout<<"Enter the size of nums1: ";
    cin>>n1;
    int l=0;

    for(int i=0;i<n1;i++)
    {
        cin>>l;
        nums1.push_back(l);
    }
    cout<<"Enter the limit of nums1: ";
    cin>>m;
    cout<<"Enter the size of nums2: ";
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        cin>>l;
        nums2.push_back(l);
    }
    cout<<"Enter the limit of nums2: ";
    cin>>n;
    merge(nums1,m,nums2,n);

    for(auto a: nums1)
    {
        cout<<a<<" ";
    }


}