int Solution::lengthOfLastWord(const string a) {
    int l=a.length();
    int count=0,flag=0;
    for(int i=l-1;i>=0;i--)
    {
        if(a[i]==' '&&flag==0)
        {
            i--;
        }
        if(a[i]==' '&&flag==1)
        {
            return count;
        }
        if(isalpha(a[i]))
        {
            flag=1;
            count++;
        }
       
    }
    return count;
}
