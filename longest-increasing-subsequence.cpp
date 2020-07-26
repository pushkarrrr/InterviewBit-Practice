int Solution::lis(const vector<int> &A) {
    int n=A.size();
    vector<int>dp;
    for(int i=0;i<=n;i++)
    {
        dp.push_back(1);
    }
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[i-1]>A[j-1])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int best=0;
    for(int i=0;i<=n;i++)
    {
        if(dp[i]>best)
        {
            best=dp[i];
        }
    }
    return best;
}
