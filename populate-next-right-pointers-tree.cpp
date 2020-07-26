/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* root) {
    queue<TreeLinkNode*>q;
    TreeLinkNode*temp;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(q.front()!=NULL)
        {
            temp->next=q.front();
            if(temp->left!=NULL)
            {
            q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
            q.push(temp->right);
            }
        }
        else
        {
            if(temp->left!=NULL)
            {
            q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
            q.push(temp->right);
            }
            temp->next=NULL;
            q.pop();
            if(!q.empty())
            {
            q.push(NULL);
            }
        }
    }
}
