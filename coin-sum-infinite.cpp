int Solution::coinchange2(vector<int> &a,int amount) {
    int n=a.size();
    int dp[amount+1];
    for(int i=0;i<amount+1;i++)
    {
        dp[i]=0;
    }
    dp[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=a[i];j<=amount;j++)
        {
            dp[j]+=dp[j-a[i]];
            dp[j]=dp[j] % 1000007;
        }
    }
    return dp[amount];
}
