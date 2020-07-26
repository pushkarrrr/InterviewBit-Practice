/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* root) {
    vector<vector<int>>ans;
    vector<int>temp;
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        TreeNode* node=q.front();
        q.pop();
        if(node==NULL)
        {
            ans.push_back(temp);
            temp.clear();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            temp.push_back(node->val);
            if(node->right)
            {
                q.push(node->right);
            }
            if(node->left)
            {
                q.push(node->left);
            }
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        ans[i].reverse();
    }
    return ans;
}
