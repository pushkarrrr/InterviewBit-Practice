int Solution::solve(string a) {
    int l=a.length();
    for(int i=0;i<l;i++)
    {
        if(isupper(a[i]))
        {
        a[i]=tolower(a[i]);
        }
            
    }
    int count=0;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            for(int j=i;j<l;j++)
            {
                count++;
            }
        }
    }
    return count%10003;
    
}
