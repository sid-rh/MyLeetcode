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

ListNode *deleteDuplicates(ListNode *head)
{
    if (head == NULL)
        return head;
    ListNode *ptr = head;
    while (ptr != NULL)
    {
        ListNode *nextPtr = ptr->next;
        while (ptr != NULL && nextPtr != NULL && nextPtr->val == ptr->val)
        {
            ptr->next = nextPtr->next;
            // nextPtr->next=NULL;
            nextPtr = ptr->next;
        }
        ptr = ptr->next;
    }

    return head;
}

int main()
{
    ListNode *head = NULL;
    cout << "Enter the numbers of: " << endl;
    while (1)
    {
        int val;
        cin >> val;
        if (cin.fail())
            break;
        insertAtEnd(head, val);
    }
    /*
        clear and ignore are used to clear the erros from cin.fail()
    */
    cin.clear();
    cin.ignore();

    ListNode *sortedList = deleteDuplicates(head);
    printList(sortedList);
}