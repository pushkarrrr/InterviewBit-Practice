int Solution::removeDuplicates(vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int>b;
    int n=a.size();
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[j++]=a[i];
        }
    }
    a[j++]=a[n-1];
    return j;
}
