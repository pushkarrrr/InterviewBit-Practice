/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int similartree(TreeNode*A,TreeNode*B)
{
    if(A==NULL&&B==NULL)
    {
        return true;
    }
    else if((A==NULL&&B!=NULL)||(B==NULL&&A!=NULL)||(A->val!=B->val))
    {
        return false;
    }
    else
    {
        return similartree(A->left,B->right)&& similartree(A->right,B->left);
    }
}
int Solution::isSymmetric(TreeNode* root) {
    if(root==NULL)
    {
        return true;
    }
    if((root->right!=NULL&&root->left==NULL)||(root->left!=NULL&&root->right==NULL))
    {
        return false;
    }
    TreeNode* l=root->left;
    TreeNode* r=root->right;
    int ans=similartree(l,r);
    return ans;
}
