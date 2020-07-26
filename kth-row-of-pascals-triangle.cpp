vector<int> Solution::getRow(int n) {
    vector<vector<int>> a(n+1);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j-1<0||j==i)
            {
                a[i].push_back(1);
            }
            else
            {
                a[i].push_back(a[i-1][j]+a[i-1][j-1]);
            }
        }
    }
    vector<int>v;
    for(int k=0;k<=n;k++)
    {
        v.push_back(a[n][k]);
    }
    return v;
}
