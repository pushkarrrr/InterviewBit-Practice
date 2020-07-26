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
        combinationsum(ans,a,b,i+1,k);
        b.pop_back();
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &a, int k) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int>>ans;
    sort(a.begin(),a.end());
    vector<int>b;
    combinationsum(ans,a,b,0,k);
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}
