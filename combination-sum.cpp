int arraysum(vector<int>a)
{
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i];
    }
    return sum;
}
void combinationsum(vector<vector<int>>&ans,vector<int>&a,vector<int>&b,int i,int k)
{
    if(arraysum(b)>=k)
    {
        if(arraysum(b)==k)
        {
            ans.push_back(b);
        }
        return;
    }
    for(i;i<a.size();i++)
    {
        b.push_back(a[i]);
        combinationsum(ans,a,b,i,k);
        b.pop_back();
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &a, int k) {
    vector<vector<int>>ans;
    sort(a.begin(),a.end());
    vector<int>b;
    a.erase(unique(a.begin(), a.end()), a.end());
    combinationsum(ans,a,b,0,k);
    return ans;
}
