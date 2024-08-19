// https://www.naukri.com/code360/problems/inorder-traversal_3839605?leftPanelTabValue=PROBLEM
/*
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
void PostOrder(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
    {
        return;
    }

    PostOrder(root->left, v);
    v.push_back(root->data);
    PostOrder(root->right, v);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> v;
    PostOrder(root, v);
    return v;
}