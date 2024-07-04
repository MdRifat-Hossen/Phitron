/*
2807. Insert Greatest Common Divisors in Linked List
https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/


 ===========>>> manualy calculate the gcd
#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 56;
    int b = 98;

    int result = gcd(a, b);
    std::cout << "GCD of " << a << " and " << b << " is " << result << std::endl;

    return 0;
}



*/

#include <iostream>
#include <algorithm> // for __gcd
using namespace std;

// Definition for singly-linked list
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
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        ListNode *tmp = head;
        while (tmp != nullptr && tmp->next != nullptr)
        {
            int gcd_val = __gcd(tmp->val, tmp->next->val);
            ListNode *new_node = new ListNode(gcd_val);
            new_node->next = tmp->next;
            tmp->next = new_node;

            tmp = tmp->next->next;
        }
        return head;
    }
};

// Function to print the linked list
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
    ListNode *head = new ListNode(12);
    head->next = new ListNode(24);
    head->next->next = new ListNode(36);
    head->next->next->next = new ListNode(48);

    Solution sol;
    cout << "Original List: ";
    printList(head);

    sol.insertGreatestCommonDivisors(head);

    cout << "Modified List: ";
    printList(head);

    return 0;
}
