int Solution::wordBreak(string A, vector<string> &B) {
    int n=A.size();
    int m=B.size();
    unordered_set<string>dict;
    for(int i=0;i<m;i++)
    {
        dict.insert(B[i]);
    }
    bool dp[n+1];
    for(int i=0;i<=n;i++)
    {
        dp[i]=false;
    }
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(dp[j]&&dict.count(A.substr(j,i-j))==1)
            {
                dp[i]=true;
                break;
            }
        }
    }
    return dp[n];
     
}
