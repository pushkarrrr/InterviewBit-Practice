int Solution::firstMissingPositive(vector<int> &a) {
    int n=a.size();
    //1st step - Range mai daal sabko else 1
    bool onepresent=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            onepresent=true;
        }
    }
    if(!onepresent)
    {
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0||a[i]>n)
        {
            a[i]=1;
        }
    }
    //2nd Array map kar index se
    for(int i=0;i<n;i++)
    {
        int index=abs(a[i])-1;
        if(a[index]>0)
        {
            a[index]=-a[index];
        }
    }
    //3rd find non negative and return
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            return i+1;
        }
    }
    return n+1;
}
