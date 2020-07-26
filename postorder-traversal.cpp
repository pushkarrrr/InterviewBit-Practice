/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void postorder(TreeNode*root,vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left,ans);
    postorder(root->right,ans);
    ans.push_back(root->val);
}
vector<int> Solution::postorderTraversal(TreeNode* root) {
    vector<int>ans;
    postorder(root,ans);
    return ans;
}
