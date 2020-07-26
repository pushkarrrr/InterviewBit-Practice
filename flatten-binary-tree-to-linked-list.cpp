/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void fillPreorder(vector<TreeNode*>& preOrder, TreeNode* root)
{
    if (!root)
        return;
    preOrder.push_back(root);
    fillPreorder(preOrder, root->left);
    fillPreorder(preOrder, root->right);
}
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a dou bt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if (!A)
        return A;
    vector<TreeNode*> preOrder;
    fillPreorder(preOrder, A);
    TreeNode* root = A;
    for (auto i = 1; i<preOrder.size(); i++)
    {
        A->left = NULL;
        A->right = preOrder[i];
        A = A->right;
    }
    return root;
    
}
