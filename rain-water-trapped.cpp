int Solution::trap(const vector<int> &A) {
    int n=A.size();
    vector<int>l(n);
    vector<int>r(n);
    l[0]=A[0];
    for(int i=1;i<n;i++)
    {
        l[i]=max(l[i-1],A[i]);
    }
    r[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--)
    {
        r[i]=max(A[i],r[i+1]);
    }
    int area=0;
    for(int i=0;i<n;i++)
    {
        area+=min(r[i],l[i])-A[i];
    }
    return area;
}
