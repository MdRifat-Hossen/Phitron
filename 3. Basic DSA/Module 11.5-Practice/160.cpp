/*
160. Intersection of Two Linked Lists
https://leetcode.com/problems/intersection-of-two-linked-lists/

*/
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        for (ListNode *tmpA = headA; tmpA != NULL; tmpA = tmpA->next)
        {
            for (ListNode *tmpB = headB; tmpB != NULL; tmpB = tmpB->next)
            {
                if (tmpA == tmpB)
                {
                    return tmpA;
                }
            }
        }
        return NULL;
    }
};

// Function to print the linked list
void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Example usage
    ListNode *headA = new ListNode(4);
    headA->next = new ListNode(1);

    ListNode *headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);

    ListNode *common = new ListNode(8);
    common->next = new ListNode(4);
    common->next->next = new ListNode(5);

    headA->next->next = common;
    headB->next->next->next = common;

    Solution sol;
    ListNode *intersection = sol.getIntersectionNode(headA, headB);

    if (intersection)
    {
        cout << "Intersection at node with value: " << intersection->val << endl;
    }
    else
    {
        cout << "No intersection" << endl;
    }

    return 0;
}
