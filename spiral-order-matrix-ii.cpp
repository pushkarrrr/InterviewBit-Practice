vector<vector<int> > Solution::generateMatrix(int n) {
    vector<vector<int>> a(n,vector<int>(n,0));
    int rowstart=0,columnstart=0,rowend=n-1,columnend=n-1;
    int count=1;
    while(rowstart<=rowend&&columnstart<=columnend)
    {
        
        for(int i=columnstart;i<=columnend;i++)
        {
            a[rowstart][i]=count++;
        }
        rowstart++;
        for(int i=rowstart;i<=rowend;i++)
        {
            a[i][columnend]=count++;
        }
        columnend--;
        if(columnstart<=columnend)
        {
            for(int i=columnend;i>=columnstart;i--)
            {
                a[rowend][i]=count++;
            }
            rowend--;
        }
        
        if(rowstart<=rowend)
        {
            for(int i=rowend;i>=rowstart;i--)
            {
                a[i][columnstart]=count++;
            }
             columnstart++;
        }
       
    }
   
    return a;
}
