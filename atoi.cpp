int Solution::atoi(const string A) {
    int n=A.length();
    int i=0;
    long long int ans=0;
    int sign=1;
    while(A[i]==' ')
    {
        i++;
    }
    if(A[i]=='+')
    {
        i++;
    }
    if(A[i]=='-')
    {
        sign=-1;
        i++;
    }
    while(isdigit(A[i])&&i<n)
    {
        if(ans>(INT_MAX/10)||(ans==INT_MAX/10&&A[i]-'0'>7))
        {
            if(sign==1)
            {
                return INT_MAX;
            }
            else
            {
                return INT_MIN;
            }
        }
        ans=ans*10+(A[i]-'0');
        i++;
    }
    return sign*ans;
    
    
}
