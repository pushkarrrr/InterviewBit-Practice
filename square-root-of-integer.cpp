int Solution::sqrt(int a) {
    int s=0;
    int e=a;
    int ans;
    while(s<=e)
    {
        long long int mid=(s+e)/2;
        if(mid*mid==a)
        {
            return mid;
        }
        if(mid*mid<a)
        {
            ans=mid;
            s=mid+1;
        }
        if(mid*mid>a)
        {
            e=mid-1;
        }
    }
    return ans;
}
