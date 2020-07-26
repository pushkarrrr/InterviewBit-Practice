int Solution::uniquePathsWithObstacles(vector<vector<int> > &a) {
    int n=a.size();
    int m=a[0].size();
    int dp[n][m];
    int flag=1; //flag represents ek bhi 1 agaya toh baaki sare 0 paths honge
    for(int i=0;i<n;i++)
    {
        if(a[i][0]==1)
        {
            flag=0;
        }
        dp[i][0]=flag;
    }
    flag=1;
    for(int j=0;j<m;j++)
    {
        if(a[0][j]==1)
        {
            flag=0;
        }
        dp[0][j]=flag;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
            if(a[i][j]==1)
            {
                dp[i][j]=0;
            }
        }
    }
    return dp[n-1][m-1];
}
