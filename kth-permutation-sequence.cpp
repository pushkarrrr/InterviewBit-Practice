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
        swap(a[i],a[l]);
        permutations(ans,a,l+1,r);
        swap(a[i],a[l]);
    }
}
string Solution::getPermutation(int A, int B) {
    if(A>12)
    {
        return to_string(INT_MAX);
    }
    vector<int>a;
    for(int i=1;i<=A;i++)
    {
        a.push_back(i);
    }
    int n=a.size();
    vector<vector<int>>ans;
    permutations(ans,a,0,n-1);
    string temp="";
    for(int i=0;i<n;i++)
    {
        temp+=ans[B-1][i]+'0';
    }
    return temp;
}
