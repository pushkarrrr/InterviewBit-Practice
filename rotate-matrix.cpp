void Solution::rotate(vector<vector<int> > &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        int end=n-1;
        int j=0;
        while(j<end)
        {
            int temp=a[i][j];
            a[i][j]=a[i][end];
            a[i][end]=temp;
            end--;
            j++;
        }
    }
    
}
