int Solution::singleNumber(const vector<int> &A) {
    int n=A.size();
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^A[i];
    }
    return ans;
}
