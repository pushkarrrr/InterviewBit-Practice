vector<int> Solution::dNums(vector<int> &a, int k) {
    vector<int>ans;
    int n=a.size();
    if(k>n)
    {
        return ans;
    }
    unordered_map<int,int>m;
    int count=0;
    for(int i=0;i<k;i++)
    {
        if(m[a[i]]==0)
        {
            count++;
        }
        m[a[i]]++;
    }
    ans.push_back(count);
    for(int i=k;i<n;i++)
    {
        m[a[i-k]]--;
        if(m[a[i-k]]==0)
        {
            count--;
        }
        if(m[a[i]]==0)
        {
            count++;
        }
        ans.push_back(count);
        m[a[i]]++;
    }
    return ans;
}
