// https://www.naukri.com/code360/problems/level-order-traversal_796002?leftPanelTabValue=PROBLEM
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> v;
    if (root == NULL)
    {
        return v;
    }

    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        BinaryTreeNode<int> *tmp = q.front();
        q.pop();

        v.push_back(tmp->val);

        if (tmp->left)
        {
            q.push(tmp->left);
        }

        if (tmp->right)
        {
            q.push(tmp->right);
        }
    }

    return v;
}
