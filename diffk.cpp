int Solution::diffPossible(vector<int> &a, int k) {
    int n=a.size();
    int i=0;
    int j=1;
    while(j<n&&i<n)
    {
        if(i==j)
        {
            j++;
        }
        if(a[j]-a[i]==k)
        {
            return 1;
        }
        else if(a[j]-a[i]>k)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return 0;
    
}
