vector<vector<int> > Solution::diagonal(vector<vector<int> > &a) {
    
    int n=a[0].size();
    vector<vector<int>>v((2*n)-1);
    int i=0,k=0;
    for(int j=0;j<n;j++)
    {
        i=0;
        int m=j;
        while(j>=0)
        {
            v[k].push_back(a[i][j]);
            i++;
            j--;
            
        }
        j=m;
        k++;
    }
    for(int i=1;i<n;i++)
    {
        int j=n-1;
        int l=i;
        while(i<n)
        {
            v[k].push_back(a[i][j]);
            i++;
            j--;
        }
        i=l;
        k++;
    }
    return v;
  
    
}
