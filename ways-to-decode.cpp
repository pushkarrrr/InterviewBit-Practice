int Solution::numDecodings(string A) {
        if(A[0] == '0'){
        return 0;
    }

    int n=A.length();
    int dp[n+1];
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=0;
        if(A[i-1]!='0')
        {
            dp[i]=dp[i-1];
        }
        if(A[i-2]=='1'||(A[i-2]=='2'&&A[i-1]<='6')) //BETWEEN 10 AND 26
        {
            dp[i]+=dp[i-2];
        }
    }
    return dp[n];
}
