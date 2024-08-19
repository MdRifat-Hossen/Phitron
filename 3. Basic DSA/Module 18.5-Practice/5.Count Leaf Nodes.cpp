// https://www.naukri.com/code360/problems/count-leaf-nodes_893055?leftPanelTabValue=PROBLEM
/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

***********************************************************/

// int noOfLeafNodes(BinaryTreeNode<int> *root){
//     // Write your code here.
// }
void inorder(BinaryTreeNode<int> *root, int &count)
{
    // base case;
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, count);
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    inorder(root->right, count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    // Write your code here.
    int ctn = 0;
    inorder(root, ctn);
    return ctn;
}