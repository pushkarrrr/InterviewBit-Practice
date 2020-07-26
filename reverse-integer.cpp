int Solution::reverse(int n) {
    long long int m=0;
    while(n!=0)
    {
        int unit=n%10;
        m=m*10+unit;
        if(m>INT_MAX||m<INT_MIN)
        {
            return 0;
        }
        n=n/10;
    }
    return m;
}
