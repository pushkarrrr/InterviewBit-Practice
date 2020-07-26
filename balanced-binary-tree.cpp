/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
pair<int,bool> heightbalanced(TreeNode*root)
{
    pair<int,bool>hb;
    if(root==NULL)
    {
        hb.first=0;
        hb.second=true;
        return hb;
    }
    pair<int,bool>l=heightbalanced(root->left);
    pair<int,bool>r=heightbalanced(root->right);
    hb.first=max(l.first,r.first)+1;
    if(abs(l.first-r.first)<=1&&l.second&&r.second)
    {
        hb.second=true;
    }
    else
    {
        hb.second=false;
    }
    return hb;
}
int Solution::isBalanced(TreeNode* root) {
    pair<int,bool>hb=heightbalanced(root);
    return hb.second;
}
