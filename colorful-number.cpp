int Solution::colorful(int n) {
    unordered_map<int,bool>m;
    vector<vector<int>>a;
    vector<int>b;
    while(n!=0)
    {
        b.push_back(n%10);
        n/=10;
    }
    reverse(b.begin(),b.end());
    n=b.size();
    for(int i=0;i<n;i++)
    {
        int prod=1;
        for(int j=i;j<n;j++)
        {
            prod=prod*b[j];
            if(m[prod]==true)
            {
                return 0;
            }
            m[prod]=true;
        }
    }
    return 1;
}
