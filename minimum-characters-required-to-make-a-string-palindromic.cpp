bool ispalindrome(string A)
{
    int n=A.size();
    int start=0,end=n-1;
    while(start<end)
    {
        if(A[start]!=A[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}
int Solution::solve(string A) {
    int n=A.size();
    int count=0;
    while(A.size()>1)
    {
        if(ispalindrome(A))
        {
            return count;
        }
        else
        {
            A.pop_back();
            count++;
        }
    }
    return count;
    
}
