int Solution::findMinXor(vector<int> &a) {
    int n=a.size();
    sort(a.begin(),a.end());
    int minxor=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        int xorr=a[i]^a[i+1];
        if(xorr<minxor)
        {
            minxor=xorr;
        }
    }
    return minxor;
}
