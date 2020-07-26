int Solution::isPalindrome(int n) {
    int m=0;
    int original=n;
    if(n<0)
    {
        return 0;
    }
    while(n!=0)
    {
        
        int digit=n%10;
        m=m*10+digit;
        n=n/10;
        
    }
    if(original==m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
