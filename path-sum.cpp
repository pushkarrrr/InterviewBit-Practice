/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool pathsum(TreeNode*root,int k)
{
    if(root==NULL)
    {
        return false;
    }
    //base
    if(root->val-k==0&&root->left==NULL&&root->right==NULL)
    {
        return true;
    }
    //recur
    return (pathsum(root->left,k-root->val)||pathsum(root->right,k-root->val));
}
int Solution::hasPathSum(TreeNode* root, int k) {
    int ans=pathsum(root,k);
    return ans;
}
