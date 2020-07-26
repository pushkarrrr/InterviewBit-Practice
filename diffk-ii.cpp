int Solution::diffPossible(const vector<int> &a, int k) {
    int n=a.size();
    if(n==0||n==1)
    {
        return false;
    }
    unordered_map<int,bool>m;
    if(k==0)
    {
        for(int i=0;i<n;i++)
        {
            if(m[a[i]]==true)
            {
                return true;
            }
            m[a[i]]=true;
        }
        return false;
    }
    for(int i=0;i<n;i++)
    {
        m[a[i]]=true;
    }
    
    for(int i=0;i<n;i++)
    {
        if(m[k+a[i]]==true)
        {
            return true;
        }
    }
    return false;
}
