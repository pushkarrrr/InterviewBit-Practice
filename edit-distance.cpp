int Solution::minDistance(string A, string B) {
    int n=A.length();
    int m=B.length();
    int dp[n+1][m+1];
    dp[0][0]=0;
    for(int i=1;i<=m;i++)
    {
        dp[0][i]=1+dp[0][i-1];
    }
    for(int i=1;i<=n;i++)
    {
        dp[i][0]=1+dp[i-1][0];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(A[i-1]==B[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
            }
        }
    }
    return dp[n][m];
}
