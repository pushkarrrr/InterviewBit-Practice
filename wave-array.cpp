vector<int> Solution::wave(vector<int> &a) {
    int n=a.size();
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i+=2)
    {
        swap(a[i],a[i+1]);
    }
    //IF LEXIOGRAPHICALLY NOT SORTED O(n)
    // for(int i=0;i<n;i=i+2)
    // {
    //     if(i>0&&a[i]<a[i-1])
    //     {
    //         swap(a[i],a[i+1]);
    //     }
    //     if(i<n-1&&a[i]<a[i+1])
    //     {
    //         swap(a[i],a[i+1]);
    //     }
    // }
    return a;
}
