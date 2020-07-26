vector<vector<int> > Solution::solve(int n) {
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++)
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
    return a;
}
