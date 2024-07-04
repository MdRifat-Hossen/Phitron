/* https://leetcode.com/problems/swap-nodes-in-pairs/description/
24. Swap Nodes in Pairs
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
    ListNode *swapPairs(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }

        ListNode *tmp1 = head;
        ListNode *tmp2 = head->next;

        while (tmp1 != nullptr && tmp2 != nullptr)
        {
            swap(tmp1->val, tmp2->val);
            tmp1 = tmp1->next->next;
            if (tmp1 != nullptr)
            {
                tmp2 = tmp1->next;
            }
        }

        return head;
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
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    Solution sol;
    ListNode *swappedHead = sol.swapPairs(head);

    cout << "Swapped list: ";
    printList(swappedHead);

    return 0;
}
