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
    // Function to reverse the linked list
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *reve = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return reve;
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
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    ListNode *head = createList(arr, size);

    // Print the original list
    std::cout << "Original list: ";
    printList(head);

    // Reverse the list
    Solution solution;
    ListNode *reversedHead = solution.reverseList(head);

    // Print the reversed list
    std::cout << "Reversed list: ";
    printList(reversedHead);

    // Clean up memory
    while (reversedHead != nullptr)
    {
        ListNode *tmp = reversedHead;
        reversedHead = reversedHead->next;
        delete tmp;
    }

    return 0;
}
