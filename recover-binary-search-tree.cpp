/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inorder(TreeNode*root,TreeNode*&first,TreeNode*&second,TreeNode*&previous)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,first,second,previous);
    //WORK
    if(previous!=NULL)
    {
        if(previous->val>root->val)
        {
            if(first==NULL)
            {
                first=previous;
            }
            second=root;
        }
    }
    previous=root;
    inorder(root->right,first,second,previous);
}
vector<int> Solution::recoverTree(TreeNode* root) {
    TreeNode*first=NULL;
    TreeNode*second=NULL;
    TreeNode*previous=NULL;
    inorder(root,first,second,previous);
    vector<int>v;
    v.push_back(second->val);
    v.push_back(first->val);
    return v;
    
}
