string Solution::longestPalindrome(string a) {
    if(a.length()<1)
    {
        return "\0";
    }
    int maxlength=1;
    int start=0;
    int left,right;
    for(int i=1;i<a.length();i++)
    {
        //EVEN PALLINDROME
        left=i-1;
        right=i;
        while(left>=0&&right<a.length()&&a[left]==a[right])
        {
            if(right-left+1>maxlength)
            {
                maxlength=right-left+1;
                start=left;
            }
            left--;
            right++;
        }
        //ODD PALINDROME
        left=i-1;
        right=i+1;
        while(left>=0&&right<a.length()&&a[left]==a[right])
        {
            if(right-left+1>maxlength)
            {
                maxlength=right-left+1;
                start=left;
            }
            left--;
            right++;
        }
    }
    string b;
    for(int i=start;i<start+maxlength;i++)
    {
        b+=a[i];
    }
    return b;
    
}
