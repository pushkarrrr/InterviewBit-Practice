int Solution::maxp3(vector<int> &A) {
    long long int ans=1;
    sort(A.begin(),A.end());
    int n=A.size();
    long long int twonegatives=A[0]*A[1]*A[n-1];
    long long int allpositive=A[n-3]*A[n-2]*A[n-1];
    ans=max(twonegatives,allpositive);
    return ans;
}
