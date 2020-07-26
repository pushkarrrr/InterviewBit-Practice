/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void pathsum(TreeNode*root,int k,vector<int>temp,vector<vector<int>>&ans)
{
    if(root==NULL)
    {
        return;
    }
    if(root->val-k==0&&root->left==NULL&&root->right==NULL)
    {
        temp.push_back(root->val);
        ans.push_back(temp);
    }
    if(root->left)
    {
        temp.push_back(root->val);
        pathsum(root->left,k-root->val,temp,ans);
        temp.pop_back();
    }
    if(root->right)
    {
        temp.push_back(root->val);
        pathsum(root->right,k-root->val,temp,ans);
        temp.pop_back();
    }
    
}
vector<vector<int> > Solution::pathSum(TreeNode* root, int k) {
    vector<vector<int>>ans;
    vector<int>temp;
    pathsum(root,k,temp,ans);
    return ans;
}
