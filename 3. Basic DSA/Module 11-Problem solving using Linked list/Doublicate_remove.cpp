#include <iostream>

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
    // Function to delete duplicates from a sorted linked list
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;
        while ((temp != nullptr) && (temp->next != nullptr))
        {
            if (temp->val == temp->next->val)
            {
                temp->next = temp->next->next;
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};

// Helper function to print the linked list
void printList(ListNode *head)
{
    ListNode *tmp = head;
    while (tmp != nullptr)
    {
        std::cout << tmp->val << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

// Helper function to create a linked list from an array
ListNode *createList(int arr[], int size)
{
    if (size == 0)
        return nullptr;
    ListNode *head = new ListNode(arr[0]);
    ListNode *current = head;
    for (int i = 1; i < size; ++i)
    {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main()
{
    // Create a sample sorted linked list: 1 -> 1 -> 2 -> 3 -> 3
    int arr[] = {1, 1, 2, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    ListNode *head = createList(arr, size);

    // Print the original list
    std::cout << "Original list: ";
    printList(head);

    // Delete duplicates
    Solution solution;
    ListNode *newHead = solution.deleteDuplicates(head);

    // Print the modified list
    std::cout << "List after removing duplicates: ";
    printList(newHead);

    // Clean up memory
    while (newHead != nullptr)
    {
        ListNode *tmp = newHead;
        newHead = newHead->next;
        delete tmp;
    }

    return 0;
}
