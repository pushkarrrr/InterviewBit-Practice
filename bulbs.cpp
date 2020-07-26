int Solution::bulbs(vector<int> &A) {
    int count=0;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        if(A[i]==0&&count%2==0)
        {
            count++;
        }
        if(A[i]==1&&count%2==1)
        {
            count++;
        }
        
    }
    return count;
}
