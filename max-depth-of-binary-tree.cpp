/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int depth(TreeNode*root)
 {
     if(root==NULL)
     {
         return 0;
     }
     int lh=depth(root->left);
     int rh=depth(root->right);
     return max(lh,rh)+1;
 }
int Solution::maxDepth(TreeNode* root) {
    int height=depth(root);
    return height;
}
