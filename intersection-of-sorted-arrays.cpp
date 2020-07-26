vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {
    int n=a.size();
    int m=b.size();
    vector<int>ans;
    int j=0,i=0;
    while(i<n&&j<m)
    {
        if(a[i]>b[j])
        {
            j++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
