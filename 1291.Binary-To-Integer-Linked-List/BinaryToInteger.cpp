#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int getDecimalValue(ListNode *head)
{
    int n = 0;
    ListNode *temp = head;
    while (temp)
    {
        temp = temp->next;
        n++;
    }
    int ans = 0;
    while (head)
    {
        ans += pow(2, n - 1) * (head->val);
        head = head->next;
        n--;
    }
    return ans;
}

int main()
{
}