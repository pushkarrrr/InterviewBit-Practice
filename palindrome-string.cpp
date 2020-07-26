int Solution::isPalindrome(string A) {
    int l=A.length();
    for(int i=0;i<l;i++)
    {
       if(isupper(A[i]))
       {
           A[i]=tolower(A[i]);
       }
    }
    int start=0;
    int end=l-1;
    while(start<end)
    {
        if(isalnum(A[start])&&isalnum(A[end]))
        {
            if(A[start]!=A[end])
            {
                return 0;
            }
            else
            {
                start++;
                end--;
            }
        }
        else
        {
            if(!isalnum(A[start]))
            {
                start++;
            }
            if(!isalnum(A[end]))
            {
                end--;
            }
        }
    }
    return 1;
}
