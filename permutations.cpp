void permutations(vector<vector<int>>&ans,vector<int>a,int l, int r)
{
    if(l==r)
    {
        //push array
        ans.push_back(a);
    }
    //recursive
    for(int i=l;i<=r;i++)
    {
        swap(a[l],a[i]);
        permutations(ans,a,l+1,r);
        swap(a[l],a[i]);
    }
}
vector<vector<int> > Solution::permute(vector<int> &a) {
    int n=a.size();
    vector<vector<int>>ans;
    permutations(ans,a,0,n-1);
    return ans;
}
