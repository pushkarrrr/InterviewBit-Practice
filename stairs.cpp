int Solution::climbStairs(int n) {
    int dp[n];
    dp[0]=1;
    int temp=0;
    int k=2;
    for(int i=1;i<=n;i++)
    {
        if(i-k-1>=0)
        {
            temp-=dp[i-k-1];
        }
        temp+=dp[i-1];
        dp[i]=temp;
    }
    return dp[n];
}
