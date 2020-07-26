int Solution::titleToNumber(string A) {
    int ans=0;
    int count=0;
    for(int i=0;A[i]!='\0';i++)
    {
        ans=ans*26;
        ans=ans+A[i]-64;
    }
    return ans;
}
