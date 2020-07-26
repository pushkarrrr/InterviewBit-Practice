/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int similartree(TreeNode*A,TreeNode*B)
{
    if(A==NULL&&B==NULL)
    {
        return true;
    }
    else if((A==NULL&&B!=NULL)||(B==NULL&&A!=NULL)||(A->val!=B->val))
    {
        return false;
    }
    
        return similartree(A->left,B->left)&&similartree(A->right,B->right);
    
}
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    int ans=similartree(A,B);
    return ans;
}
