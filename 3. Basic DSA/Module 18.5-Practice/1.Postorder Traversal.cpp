/*
https://www.naukri.com/code360/problems/name_2035933?leftPanelTabValue=PROBLEM
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void PostOrder(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
    {
        return;
    }
    PostOrder(root->left, v);
    PostOrder(root->right, v);
    v.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> v;
    PostOrder(root, v);

    return v;
}