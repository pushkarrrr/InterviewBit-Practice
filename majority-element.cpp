int Solution::majorityElement(const vector<int> &A) {
    int n=A.size();
    int ans=A[0];
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(A[i]==ans)
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            ans=A[i];
            count++;
        }
    }
    return ans;
}
