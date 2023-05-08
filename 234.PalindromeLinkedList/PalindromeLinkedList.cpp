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
    Approach: fast and slow pointer, if size is odd fast will not reach null. Reverse the list each time you iterate and compare with the other half. Don't compare the middle element in case of odd size.
*/

bool isPalindrome(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        ListNode *curr = slow;
        slow = slow->next;
        curr->next = prev;
        prev = curr;
    }
    if (fast)
        slow = slow->next;
    while (slow)
    {
        if (slow->val != prev->val)
            return false;
        slow = slow->next;
        prev = prev->next;
    }

    return true;
}

int main()
{
}