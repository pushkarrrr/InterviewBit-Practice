//comments for not-repeat words
bool dfs(vector<string>&A,int i,int j,int count,string B)
{
    if(count==B.size())
    {
        return true;
    }
    if(i<0||i>=A.size()||j<0||j>=A[0].size()||A[i][j]!=B[count])
    {
        return false;
    }
    //char temp=A[i][j];
    //A[i][j]=" ";
    bool ans=dfs(A,i+1,j,count+1,B)||dfs(A,i-1,j,count+1,B)||dfs(A,i,j+1,count+1,B)||dfs(A,i,j-1,count+1,B);
    //A[i][j]=temp;
    return ans;
}
int Solution::exist(vector<string> &A, string B) {
    int n=A.size();
    int m=A[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]==B[0]&&dfs(A,i,j,0,B))
            {
                return true;
            }
        }
    }
    return false;
}
