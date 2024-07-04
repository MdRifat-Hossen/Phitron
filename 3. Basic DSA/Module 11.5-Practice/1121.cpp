/*
https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
1721. swapping-nodes-in-a-linked-list
*/
#include <bits/stdc++.h>

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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *tmp = head;
        // Move tmp to the k-th node
        for (int i = 0; i < k - 1; i++)
        {
            tmp = tmp->next;
        }

        // `left` points to the k-th node
        ListNode *left = tmp;
        // `right` starts from the head of the list
        ListNode *right = head;

        // Move tmp to the end of the list
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
            right = right->next;
        }

        // Swap values of left and right nodes
        std::swap(left->val, right->val);

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
    // Create a list: 1 -> 2 -> 3 -> 4 -> 5
    std::vector<int> values = {1, 2, 3, 4, 5};
    ListNode *head = createList(values);

    std::cout << "Original list: ";
    printList(head);

    // Swap nodes at positions 2 and 4 (1-based index)
    int k = 2;
    Solution solution;
    head = solution.swapNodes(head, k);

    std::cout << "Modified list after swapping nodes at positions " << k << " and " << values.size() - k + 1 << ": ";
    printList(head);

    return 0;
}
