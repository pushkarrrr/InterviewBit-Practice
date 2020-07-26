void allsubsets(vector<vector<int>>&ans,vector<int>a,vector<int>b,int i)
{
    if(i==a.size())
    {
        ans.push_back(b);
        return;
    }
    //exclude
    allsubsets(ans,a,b,i+1);
    //include
    b.push_back(a[i]);
    allsubsets(ans,a,b,i+1);
    
}
vector<vector<int> > Solution::subsets(vector<int> &a) 
{
    sort(a.begin(),a.end());
    vector<vector<int>>ans;
    vector<int>b;
    allsubsets(ans,a,b,0);
    sort(ans.begin(),ans.end());
    return ans;
}
