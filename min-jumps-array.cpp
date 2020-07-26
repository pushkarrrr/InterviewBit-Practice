int Solution::jump(vector<int> &a) {
    int n=a.size();
    if(n<=1)
    {
        return 0;
    }
    if(a[0]==0)
    {
        return -1;
    }
    int maxreach=a[0];
    int step=a[0];
    int jumpcount=1;
    for(int i=1;i<n-1;i++)
    {
        if(i+a[i]>maxreach)
        {
            maxreach=i+a[i];
        }
        step--;
        if(step==0)
        {
            jumpcount++;
            if(maxreach-i<=0) //= for current element 0
            {
                return -1;
            }
            step=maxreach-i;
        }
    }
    if(maxreach>=n-1)
    {
        return jumpcount;
    }
    return -1;
}
