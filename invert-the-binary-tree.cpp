/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//traverse till one node before leaf and start swapping
void invert(TreeNode*root)
{
    if(root==NULL)
    {
        return;
    }
    invert(root->left);
    invert(root->right);
    TreeNode*temp=root->left;
    root->left=root->right;
    root->right=temp;
}
TreeNode* Solution::invertTree(TreeNode* root) {
    invert(root);
    return root;
}
