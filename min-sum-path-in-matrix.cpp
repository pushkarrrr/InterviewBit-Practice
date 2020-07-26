int Solution::minPathSum(vector<vector<int> > &input) {
    int n=input.size();
    int m=input[0].size();
    int dp[n][m];
    //1) Destination
    dp[n-1][m-1]=input[n-1][m-1];
    //2) last row
    for(int j=m-2;j>=0;j--)
    {
        dp[n-1][j]=input[n-1][j]+dp[n-1][j+1];
    }
    //3 last column
    for(int i=n-2;i>=0;i--)
    {
        dp[i][m-1]=input[i][m-1]+dp[i+1][m-1];
    }
    //3 others
    for(int i=n-2;i>=0;i--)
    {
        for(int j=m-2;j>=0;j--)
        {
            dp[i][j]=input[i][j]+min(dp[i+1][j],dp[i][j+1]);
        }
    }
    return dp[0][0];
}
