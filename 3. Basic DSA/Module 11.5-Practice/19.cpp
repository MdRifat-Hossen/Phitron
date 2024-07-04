/*
https://leetcode.com/problems/remove-nth-node-from-end-of-list/
19. Remove Nth Node From End of List

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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // Calculate the length of the list
        ListNode *tmp = head;
        int length = 0;
        while (tmp != NULL)
        {
            tmp = tmp->next;
            length++;
        }

        // Find the position of the node to be removed from the beginning
        int pos = length - n;

        // If the node to be removed is the head node
        if (pos == 0)
        {
            ListNode *newHead = head->next;
            delete head; // Free the memory of the old head node
            return newHead;
        }

        // Traverse to the node just before the one to be removed
        tmp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }

        // Remove the node
        ListNode *nodeToDelete = tmp->next;
        tmp->next = tmp->next->next;
        delete nodeToDelete; // Free the memory of the removed node

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

    // Remove the 2nd node from the end
    Solution solution;
    head = solution.removeNthFromEnd(head, 2);

    std::cout << "Modified list: ";
    printList(head);

    return 0;
}
