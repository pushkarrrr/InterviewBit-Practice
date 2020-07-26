int Solution::isPower(int n) {
    if(n<2)
    {
        return true;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        for(int j=1;j<=36;j++)
        {
            if(pow(i,j)==n)
            {
                return true;
            }
        }
    }
    return false;
}
