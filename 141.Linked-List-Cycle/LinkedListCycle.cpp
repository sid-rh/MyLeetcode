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
/*
    Approach 1: fast and slow pointers, if the fast one reaches the end, No cycle, if the meet each other even once-> cycle.
*/

bool hasCycle1(ListNode *head)
{
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

/*
    Approach 2: store the pointer in a set. If found again-> cycle, else if end is reached no cycle.
*/

bool hasCycle2(ListNode *head)
{
    unordered_set<ListNode *> st;
    ListNode *temp = head;
    while (temp)
    {
        if (st.count(temp))
            return true;
        st.insert(temp);
        temp = temp->next;
    }
    return false;
}

int main()
{
}