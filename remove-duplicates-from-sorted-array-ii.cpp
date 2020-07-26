int Solution::removeDuplicates(vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=a.size();
    if(n<=2)
    {
        return n;
    }
    int j=0;
    for(int i=0;i<n-2;i++)
    {
        if(a[i]!=a[i+2])
        {
            a[j++]=a[i];
        }
    }
    a[j++]=a[n-2];
    a[j++]=a[n-1];
    return j;
    
}
