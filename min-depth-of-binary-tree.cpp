/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int depth(TreeNode*root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        return 1;
    }
    int lh=INT_MAX;
    int rh=INT_MAX;
    if(root->left!=NULL)
    {
        lh=depth(root->left);
    }
    if(root->right!=NULL)
    {
        rh=depth(root->right);
    }
    return min(lh,rh)+1;
}
int Solution::minDepth(TreeNode* root) {
    int minheight=depth(root);
    return minheight;
}
