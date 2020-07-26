int Solution::maxProduct(const vector<int> &a) {
    int n=a.size();
    int ans=a[0];
    int minprod=a[0];
    int maxprod=a[0];
    for(int i=1;i<n;i++)
    {
        int x=a[i]*maxprod;
        int y=a[i]*minprod;
        minprod=min(a[i],min(x,y));
        maxprod=max(a[i],max(x,y));
        if(maxprod>ans)
        {
            ans=maxprod;
        }
    }
    return ans;
}
