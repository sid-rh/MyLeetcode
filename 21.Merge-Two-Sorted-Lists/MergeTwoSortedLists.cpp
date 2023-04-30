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

void insertAtEnd(ListNode *&head, int data)
{
    ListNode *newNode = new ListNode(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

/*
    Approach: add it to a third list
*/
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;
    ListNode *ans = list1;
    if (list1->val > list2->val)
    {
        ans = list2;
        list2 = list2->next;
    }
    else
    {
        list1 = list1->next;
    }
    ListNode *temp = ans;

    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            temp->next = list1;
            list1 = list1->next;
        }
        else
        {
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }

    if (!list1)
        temp->next = list2;
    else
        temp->next = list1;

    return ans;
}

int main()
{
    ListNode *list1 = NULL;
    ListNode *list2 = NULL;
    cout << "Enter the numbers of list1: " << endl;
    while (1)
    {
        int val;
        cin >> val;
        if (cin.fail())
            break;
        insertAtEnd(list1, val);
    }
    /*
        clear and ignore are used to clear the erros from cin.fail()
    */
    cin.clear();
    cin.ignore();
    cout << "Enter the numbers of list2: " << endl;
    while (1)
    {
        int val2;
        cin >> val2;
        if (cin.fail())
            break;
        insertAtEnd(list2, val2);
    }

    ListNode *sortedList = mergeTwoLists(list1, list2);
    printList(sortedList);
}