/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int sumnumbers(TreeNode*root,int curr)
{
    if(root==NULL)
    {
        return 0;
    }
    curr = (((curr)%1003*10)%1003 + (root->val)%1003)%1003;
    if(root->left==NULL&&root->right==NULL)
    {
        return curr;
    }
   
    return (sumnumbers(root->left,curr)%1003+sumnumbers(root->right,curr)%1003)%1003;
    
}
int Solution::sumNumbers(TreeNode* root) {
    return sumnumbers(root,0);
}
