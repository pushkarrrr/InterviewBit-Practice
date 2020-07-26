int Solution::candy(vector<int> &a) {
    vector<int>ans;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        ans.push_back(1);
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            ans[i]=ans[i-1]+1;
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>a[i+1]&&ans[i]<ans[i+1]+1)
        {
            ans[i]=ans[i+1]+1;
        }
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=ans[i];
    }
    return total;
}
