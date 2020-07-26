vector<int> Solution::searchRange(const vector<int> &a, int B) {
    vector<int>o;
    int n=a.size();
    int s=0;
    int e=n-1;
    int mid;
    int ans1=-1;
    int ans2=-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==B)
        {
            ans1=mid;
            e=mid-1;
        }
        else if(a[mid]>B)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    o.push_back(ans1);
    s=0;
    e=n-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==B)
        {
            ans2=mid;
            s=mid+1;
        }
        else if(a[mid]>B)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    o.push_back(ans2);
    return o;
}
