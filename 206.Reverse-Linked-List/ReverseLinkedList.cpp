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

ListNode *reverseList(ListNode *head)
{
    if (!head)
        return head;
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *nextP = head->next;

    while (curr)
    {
        curr->next = prev;
        prev = curr;
        curr = nextP;
        if (nextP)
            nextP = nextP->next;
    }

    return prev;
}

int main()
{
}