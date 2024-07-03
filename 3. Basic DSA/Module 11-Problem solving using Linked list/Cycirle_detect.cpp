#include <iostream>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    // Function to check if the linked list has a cycle
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr)
            return false;
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};

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

// Helper function to create a cycle in the linked list
void createCycle(ListNode *head, int pos)
{
    if (head == nullptr || pos < 0)
        return;
    ListNode *cycleNode = head;
    ListNode *tail = head;
    int index = 0;
    while (tail->next != nullptr)
    {
        if (index == pos)
        {
            cycleNode = tail;
        }
        tail = tail->next;
        index++;
    }
    tail->next = cycleNode;
}

int main()
{
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    ListNode *head = createList(arr, size);

    // Uncomment the following line to create a cycle for testing
    // createCycle(head, 2);  // Creates a cycle at node with value 3

    // Check for cycle
    Solution solution;
    bool result = solution.hasCycle(head);
    if (result)
    {
        std::cout << "The linked list has a cycle." << std::endl;
    }
    else
    {
        std::cout << "The linked list does not have a cycle." << std::endl;
    }

    // Clean up memory (if no cycle, otherwise it will be an infinite loop)
    if (!result)
    {
        while (head != nullptr)
        {
            ListNode *tmp = head;
            head = head->next;
            delete tmp;
        }
    }

    return 0;
}
