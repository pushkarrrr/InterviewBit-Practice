/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool find(TreeNode*root,int n1)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->val==n1)
    {
        return true;
    }
    bool l=find(root->left,n1);
    bool r=find(root->right,n1);
    if(l||r)
    {
        return true;
    }
    return false;
}
TreeNode*LCA(TreeNode*root,int n1,int n2)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->val==n1||root->val==n2) //node
    {
        return root;
    }
    TreeNode*l=LCA(root->left,n1,n2);
    TreeNode*r=LCA(root->right,n1,n2);
    if(l!=NULL&&r!=NULL)
    {
        return root;
    }
    if(l!=NULL&&r==NULL)
    {
        return l;
    }
    if(l==NULL&&r!=NULL)
    {
        return r;
    }
}
int Solution::lca(TreeNode* root, int n1, int n2) {
    bool check1=find(root,n1);
    bool check2=find(root,n2);
    if(check1==false||check2==false)
    {
        return -1;
    }
    TreeNode*ans=LCA(root,n1,n2);
    return ans->val;
}
