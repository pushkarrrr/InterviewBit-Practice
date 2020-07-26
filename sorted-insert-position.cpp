int Solution::searchInsert(vector<int> &a, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=a.size();
    int s=0;
    int e=n-1;
    int mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==B)
        {
            return mid;
        }
        if(mid<e && a[mid]<B && B<a[mid+1])
        {
            return mid+1;
        }
        if(mid>s && a[mid]>B && a[mid-1]<B)
        {
            return mid;
        }
        if(a[mid]<B)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    if(mid==0)
    {
        return 0;
    }
    else
    {
        return n;
    }
}
