/*
https://leetcode.com/problems/remove-linked-list-elements/
203. Remove Linked List Elements
*/

#include <bits/stdc++.h>
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
    ListNode *removeElements(ListNode *head, int val)
    {

        // bc
        if (head == NULL)
            return NULL;
        // rr
        // 2 3 4 5 4
        head->next = removeElements(head->next, val);
        // task
        if (head->val == val)
        {
            return head->next;
        }
        return head;
    }
};

// Helper function to print the list
void printList(ListNode *head)
{
    ListNode *current = head;
    while (current != NULL)
    {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Helper function to create a list from an array
ListNode *createList(const std::vector<int> &values)
{
    if (values.empty())
        return NULL;
    ListNode *head = new ListNode(values[0]);
    ListNode *current = head;
    for (size_t i = 1; i < values.size(); ++i)
    {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

// Main function for testing
int main()
{
    // Create a list: 2 -> 3 -> 4 -> 5 -> 4
    std::vector<int> values = {2, 3, 4, 5, 4};
    ListNode *head = createList(values);

    std::cout << "Original list: ";
    printList(head);

    // Remove elements with value 4
    Solution solution;
    head = solution.removeElements(head, 4);

    std::cout << "Modified list: ";
    printList(head);

    return 0;
}
