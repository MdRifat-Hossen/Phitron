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
    // Function to calculate the size of the linked list
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int ctn = 0;
        while (tmp != nullptr)
        {
            tmp = tmp->next;
            ctn++;
        }
        return ctn;
    }

    // Function to find the middle node of the linked list
    ListNode *middleNode(ListNode *head)
    {
        // Approach 1: Using size method
        int sz = size(head);
        ListNode *tmp = head;
        for (int i = 1; i <= sz / 2; i++)
        {
            tmp = tmp->next;
        }
        return tmp;

        // Approach 2: Using two-pointer technique (uncomment below to use this approach)
        /*
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        */
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

    // Find and print the middle node
    Solution solution;
    ListNode *middle = solution.middleNode(head);
    if (middle != nullptr)
    {
        std::cout << "Middle node value: " << middle->val << std::endl;
    }
    else
    {
        std::cout << "List is empty" << std::endl;
    }

    // Clean up memory
    while (head != nullptr)
    {
        ListNode *tmp = head;
        head = head->next;
        delete tmp;
    }

    return 0;
}
