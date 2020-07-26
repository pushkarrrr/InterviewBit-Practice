int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n=A.size();
    int m=A[0].size();
    int i=0;
    int j=m-1;
    while(i<n&&j>=0)
    {
        if(A[i][j]==B)
        {
            return 1;
        }
        if(A[i][j]>B)
        {
            j--;
        }
        if(A[i][j]<B)
        {
            i++;
        }
    }
    return 0;
}
