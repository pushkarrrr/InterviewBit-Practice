int maxpathsum(TreeNode*root,int&ans)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=maxpathsum(root->left,ans);
    int r=maxpathsum(root->right,ans);
    int ms=max(max(l,r)+root->val,root->val);
    int m21=max(ms,root->val+l+r);
    ans=max(ans,m21);
    return ms;
}
int Solution::maxPathSum(TreeNode* root) {
    int ans=INT_MIN;
    maxpathsum(root,ans);
    return ans;
}
