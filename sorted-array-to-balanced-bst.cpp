/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode*arraytobst(const vector<int>&a,int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    int mid=(s+e)/2;
    TreeNode*root=new TreeNode(a[mid]);
    root->left=arraytobst(a,s,mid-1);
    root->right=arraytobst(a,mid+1,e);
    return root;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &a) {
    int n=a.size();
    TreeNode*root=arraytobst(a,0,n-1);
    return root;
}
