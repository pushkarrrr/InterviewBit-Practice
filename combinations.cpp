void combination(vector<vector<int>>&ans,vector<int>a,int n,int k,int i)
{
    if(a.size()==k)
    {
        ans.push_back(a);
        return;
    }
    for(i;i<=n;i++)
    {
        a.push_back(i);
        combination(ans,a,n,k,i+1);
        a.pop_back();
    }
}
vector<vector<int> > Solution::combine(int n, int k) {
    vector<vector<int>>ans;
    vector<int>a;
    combination(ans,a,n,k,1);
    return ans;
}
