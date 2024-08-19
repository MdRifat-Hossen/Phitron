// https://www.naukri.com/code360/problems/preorder-binary-tree_5948?leftPanelTabValue=PROBLEM
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void PostOrder(TreeNode<int> *root, vector<int> &v)
{
    if (root == NULL)
    {
        return;
    }
    v.push_back(root->data);
    PostOrder(root->left, v);
    PostOrder(root->right, v);
}
vector<int> preOrder(TreeNode<int> *root)
{
    // Write your code here.
    vector<int> v;
    PostOrder(root, v);
    return v;
}
