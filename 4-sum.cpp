//Only 4Sum programmers are gonna get xD
vector<vector<int> > Solution::fourSum(vector<int> &a, int k) {
    int n=a.size();
    vector<vector<int>>ans;
    sort(a.begin(),a.end());
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            int l=j+1;
            int r=n-1;
            while(l<r)
            {
                if(a[i]+a[j]+a[l]+a[r]==k)
                {
                    vector<int>temp;
                    temp.push_back(a[i]);
                    temp.push_back(a[j]);
                    temp.push_back(a[l]);
                    temp.push_back(a[r]);
                    ans.push_back(temp);
                    l++;
                    r--;
                }
                else if(a[i]+a[j]+a[l]+a[r]>k)
                {
                    r--;
                }
                else 
                {
                    l++;
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
    return ans;
}
//ALTERNATIVE USING HASH MAP - 1) MAKE PAIR OF EACH POSSIBLE sum and store in MAP.
                    // 2) o(n^2) loop search for sum - (a[i] + a[j])    
                    // 3) if all unique, push
