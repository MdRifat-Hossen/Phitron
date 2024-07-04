/*


1290. Convert Binary Number in a Linked List to Integer
https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/

*/

#include <iostream>
#include <cmath> // For pow (not needed in the optimized approach)
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
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int ctn = 0;
        while (tmp != NULL)
        {
            ctn++;
            tmp = tmp->next;
        }
        return ctn;
    }
    int getDecimalValue(ListNode *head)
    {
        int sz = size(head);
        int x = pow(2, sz - 1);
        int ans = 0;
        for (ListNode *tmp = head; tmp != NULL; tmp = tmp->next)
        {
            if (tmp->val == 1)
            {
                ans += x;
            }
            x /= 2;
        }
        return ans;
    }
};

// Function to print the linked list (for testing purposes)
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
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);

    Solution sol;
    int decimalValue = sol.getDecimalValue(head);

    cout << "Decimal value: " << decimalValue << endl; // Output should be 5 for the binary number 101

    return 0;
}
