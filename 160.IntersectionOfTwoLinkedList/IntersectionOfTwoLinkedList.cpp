#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/*
    Approach 1: find the difference int the lengths. Find the bigger list and bring its head forward by the difference and check for intersection.
*/

ListNode *getIntersectionNode1(ListNode *headA, ListNode *headB)
{
    int n = 0;
    int m = 0;
    ListNode *ptr1 = headA;
    ListNode *ptr2 = headB;
    while (ptr1 != NULL)
    {
        n++;
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL)
    {
        m++;
        ptr2 = ptr2->next;
    }
    int t = abs(n - m);
    if (n > m)
    {
        while (t)
        {
            headA = headA->next;
            t--;
        }
    }
    else
    {
        while (t)
        {
            headB = headB->next;
            t--;
        }
    }
    while (headA != NULL and headB != NULL)
    {
        if (headA == headB)
        {
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
}
/*
    Approach2: Use two pointers, If the lists are equal in size intersection will be found as they'll move together. Else, the smaller list ptr will reach the null first, make it equal to the head of the other list. Once the pointer to the bigger list reaches null, make it equal to the head of the smaller list. The distance between the pointers and the intersection(or NULL) will be equal.
*/
ListNode *getIntersectionNode2(ListNode *headA, ListNode *headB)
{
    ListNode *ptr1 = headA;
    ListNode *ptr2 = headB;

    if (!ptr1 || !ptr2)
        return NULL;

    while (ptr1 && ptr2 && ptr1 != ptr2)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

        if (ptr1 == ptr2)
            return ptr1;

        if (ptr1 == NULL)
            ptr1 = headB;
        if (ptr2 == NULL)
            ptr2 = headA;
    }
    return ptr1;
}

ListNode *getIntersectionNode3(ListNode *headA, ListNode *headB)
{
    unordered_map<ListNode *, int> mp;
    while (headA)
    {
        mp[headA]++;
        headA = headA->next;
    }
    while (headB)
    {
        if (mp.count(headB))
            return headB;
        headB = headB->next;
    }
    return NULL;
}

int main()
{
}