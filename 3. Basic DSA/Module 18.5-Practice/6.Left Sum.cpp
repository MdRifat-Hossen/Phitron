// https://www.naukri.com/code360/problems/left-sum_920380?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
/*
    Tree Node class.

    class BinaryTreeNode
    {
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    }
*/

long long leftSum(BinaryTreeNode<int> *root)
{
    // Write your code here.
    queue<BinaryTreeNode<int> *> q;

    q.push(root);

    int sum = 0;

    while (!q.empty())

    {

        int size = q.size();

        for (int i = 0; i < size; i++)

        {

            BinaryTreeNode<int> *first = q.front();

            q.pop();

            if (first->left)

            {

                sum += first->left->data;

                q.push(first->left);
            }

            if (first->right)

            {

                q.push(first->right);
            }
        }
    }

    return sum;
}