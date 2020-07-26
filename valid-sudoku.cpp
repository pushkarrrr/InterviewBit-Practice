int Solution::isValidSudoku(const vector<string> &a) {
    int n=a.size();
    unordered_map<char,bool>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!='.')
            {
                if(m[a[i][j]]==true)
                {
                    return 0;
                }
                m[a[i][j]]=true;
            }
        }
        m.clear();
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i][j]!='.')
            {
                if(m[a[i][j]]==true)
                {
                    return 0;
                }
                m[a[i][j]]=true;
            }
        }
        m.clear();
    }
    int rn=sqrt(n);
    for(int i=0;i<n;i=i+rn)
    {
        for(int j=0;j<n;j=j+rn)
        {
            
            for(int x=i;x<i+rn;x++)
            {
                for(int y=j;y<j+rn;y++)
                {
                    if(a[x][y]!='.')
                    {
                        if(m[a[x][y]]==true)
                        {
                            return 0;
                        }
                        m[a[x][y]]=true;
                    }
                }
            }
            m.clear();
        }
    }
    return 1;
}
