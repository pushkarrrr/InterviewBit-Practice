int Solution::maximumGap(const vector<int> &a) {
    int n=a.size();
    if(n==1)
    {
        return 0;
    }
    int minL[n];
    minL[0]=a[0];
    for(int i=1;i<n;i++)
    {
        minL[i]=min(minL[i-1],a[i]);
    }
    int maxR[n];
    maxR[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        maxR[i]=max(maxR[i+1],a[i]);
    }
    int i=0,j=0;
    int dist=-1;
    while(i<n&&j<n)
    {
        if(minL[i]<=maxR[j])
        {
            dist=max(j-i,dist);
            j++;
        }
        else
        {
            i++;
        }
    }
    return dist;
}
