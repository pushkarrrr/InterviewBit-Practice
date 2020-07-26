/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* buildtreefromtraversal(vector<int> &a, vector<int> &b,int s,int e,int &i)
 {
     if(s>e)
     {
         return NULL;
     }
     TreeNode*root=new TreeNode(b[i]);
     int index;
     for(int j=s;j<=e;j++)
     {
         if(b[i]==a[j])
         {
             index=j;
             break;
         }
     }
     i--;
     root->right=buildtreefromtraversal(a,b,index+1,e,i);
     root->left=buildtreefromtraversal(a,b,s,index-1,i);
     return root;
 }
 TreeNode* Solution::buildTree(vector<int> &a, vector<int> &b) {
    int n=a.size()-1;
    TreeNode*root=buildtreefromtraversal(a,b,0,n,n);
    return root;
}
