vector<vector<int> > Solution::anagrams(const vector<string> &a) {
    unordered_map<string,vector<int>>m;
    vector<vector<int>>ans;
    string temp;
    for(int i=0;i<a.size();i++)
    {
        temp=a[i];
        sort(temp.begin(),temp.end());
        m[temp].push_back(i+1);
    }
    for(auto it:m)
    {
        ans.push_back(it.second);
    }
    return ans;
}
