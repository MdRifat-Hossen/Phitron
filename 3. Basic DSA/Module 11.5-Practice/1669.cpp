/*
https://leetcode.com/problems/merge-in-between-linked-lists/
1669. Merge In Between Linked Lists
*/
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *tmp = list1;
        for (int i = 1; i < a; i++)
        {
            tmp = tmp->next;
        }
        // tmp=13;
        ListNode *tmp2 = tmp->next;
        for (int i = a; i <= b; i++)
        {
            tmp2 = tmp2->next;
        }
        // tmp2=5;
        tmp->next = list2;
        ListNode *tmp3 = list2;
        while (tmp3->next != NULL)
        {
            tmp3 = tmp3->next;
        }
        tmp3->next = tmp2;
        return list1;
    }
};

// Helper function to print the linked list
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
    ListNode *list1 = new ListNode(0);
    list1->next = new ListNode(1);
    list1->next->next = new ListNode(2);
    list1->next->next->next = new ListNode(3);
    list1->next->next->next->next = new ListNode(4);
    list1->next->next->next->next->next = new ListNode(5);

    ListNode *list2 = new ListNode(1000000);
    list2->next = new ListNode(1000001);
    list2->next->next = new ListNode(1000002);

    int a = 3, b = 4;

    Solution sol;
    ListNode *result = sol.mergeInBetween(list1, a, b, list2);

    cout << "Merged list: ";
    printList(result);

    return 0;
}
