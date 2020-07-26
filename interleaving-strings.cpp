int Solution::isInterleave(string A, string B, string C) {
    if(A.length()+B.length()!=C.length())
    {
        return false;
    }
    int n=A.size();
    int m=B.size();
    int dp[n+1][m+1];
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        if(C[i-1]==A[i-1])
        {
            dp[i][0]=dp[i-1][0];
        }
        else
        {
            dp[i][0]=false;
        }
    }
    for(int j=1;j<=m;j++)
    {
        if(C[j-1]==B[j-1])
        {
            dp[0][j]=dp[0][j-1];
        }
        else
        {
            dp[0][j]=false;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if((C[i+j-1]==A[i-1])&&(C[i+j-1]==B[j-1]))
            {
                dp[i][j]=dp[i-1][j]||dp[i][j-1];
            }
            else if(C[i+j-1]==A[i-1])
            {
                dp[i][j]=dp[i-1][j];
            }
            else if(C[i+j-1]==B[j-1])
            {
                dp[i][j]=dp[i][j-1];
            }
            else
            {
                dp[i][j]=false;
            }
        }
    }
    return dp[n][m];
}
