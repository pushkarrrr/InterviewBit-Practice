/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

TreeNode*sortedlisttobst(vector<int>&a,int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    int mid=(s+e)/2;
    TreeNode*root=new TreeNode(a[mid]);
    root->left=sortedlisttobst(a,s,mid-1);
    root->right=sortedlisttobst(a,mid+1,e);
    return root;
}
TreeNode* Solution::sortedListToBST(ListNode* head) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode*temp=head;
    vector<int>a;
    while(temp!=NULL)
    {
        a.push_back(temp->val);
        temp=temp->next;
    }
    TreeNode*root=sortedlisttobst(a,0,a.size()-1);
    return root;
}
