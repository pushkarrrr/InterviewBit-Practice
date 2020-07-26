TreeNode* buildtreefromtraversal(vector<int> &a, vector<int> &b,int s,int e,int &i)
 {
     if(s>e)
     {
         return NULL;
     }
     TreeNode*root=new TreeNode(a[i]);
     int index;
     for(int j=s;j<=e;j++)
     {
         if(a[i]==b[j])
         {
             index=j;
             break;
         }
     }
     i++;
     root->left=buildtreefromtraversal(a,b,s,index-1,i);
     root->right=buildtreefromtraversal(a,b,index+1,e,i);
     
     return root;
 }
 TreeNode* Solution::buildTree(vector<int> &a, vector<int> &b) {
    int n=a.size()-1;
    int i=0;
    TreeNode*root=buildtreefromtraversal(a,b,0,n,i);
    return root;
}
