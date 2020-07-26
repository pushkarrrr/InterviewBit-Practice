/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void zigzag(TreeNode*root,vector<vector<int>>&ans,vector<int>temp)
{
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        TreeNode*f=q.front();
        q.pop();
        if(f==NULL)
        {
            ans.push_back(temp);
            temp.clear();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        //LEFT TO RIGHT
        else
        {   temp.push_back(f->val);
            if(f->left)
            {
                q.push(f->left);
            }
            if(f->right)
            {
                q.push(f->right);
            }
           
        }
    }
    for(int i=1;i<ans.size();i+=2)
    {
        reverse(ans.begin(),ans.end());
    }
}
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>>ans;
    vector<int>temp;
    zigzag(root,ans,temp);
    return ans;
}
