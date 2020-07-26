int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int diff=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        if(abs(A[i]-B[i])>diff)
        {
            diff=abs(A[i]-B[i]);
        }
    }
    return diff;
}
