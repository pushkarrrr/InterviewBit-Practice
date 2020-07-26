void Solution::setZeroes(vector<vector<int> > &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m=a.size();
    int n=a[0].size();
    bool r=false;
    bool c=false;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0&&a[i][j]==0)
            {
                r=true;
            }
            if(j==0&&a[i][j]==0)
            {
                c=true;
            }
           if(a[i][j]==0)
           {
               a[i][0]=0;
               a[0][j]=0;
           }
        }
    }
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if((a[i][0]==0)||(a[0][j]==0))
            {
                a[i][j]=0;
            }
        }
    }
    if(r)
    {
     for(int i=0;i<n;i++)
    {
       
            a[0][i]=0;
        
    }
    }
    if(c)
    {
    for(int j=0;j<m;j++)
    {
        
            a[j][0]=0;
        
    }
    }
    
    
}
