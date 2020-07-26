int Solution::isMatch(const string A, const string B) {
    int n=A.size();
    int m=B.size();
    bool dp[n+1][m+1];
    dp[0][0]=true;
    for(int i=1;i<=n;i++)
    {
        dp[i][0]=false;
    }
    for(int j=1;j<=m;j++)
    {
        if(B[j-1]=='*')
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
            if((A[i-1]==B[j-1])||B[j-1]=='?')
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else if(B[j-1]=='*')
            {
                dp[i][j]=dp[i-1][j]||dp[i][j-1];
            }
            else
            {
                dp[i][j]=false;
            }
        }
    }
    return dp[n][m];
}
