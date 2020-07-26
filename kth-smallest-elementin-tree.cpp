/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(vector<int>&a,TreeNode*root,int k)
{
    if(root==NULL)
    {
        return;
    }
    inorder(a,root->left,k);
    a.push_back(root->val);
    inorder(a,root->right,k);
}
int Solution::kthsmallest(TreeNode* root, int k) {
    vector<int>ans;
    inorder(ans,root,k);
    return ans[k-1];
}
