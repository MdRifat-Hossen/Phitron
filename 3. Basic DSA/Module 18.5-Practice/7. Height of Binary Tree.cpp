// https://www.naukri.com/code360/problems/tree-height_4609628?leftPanelTabValue=PROBLEM
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int heightOfBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    if (root == NULL)
    {
        return 0;
    }
    int l = heightOfBinaryTree(root->left);
    int r = heightOfBinaryTree(root->right);
    int ans = max(l, r) + 1;
    return ans;
}
