/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void preorder(TreeNode*root,vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    ans.push_back(root->val);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
vector<int> Solution::preorderTraversal(TreeNode* root) {
    vector<int>ans;
    preorder(root,ans);
    return ans;
}
