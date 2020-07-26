string Solution::minWindow(string A, string B) {
    string temp="";
    
    unordered_map<char,int>n;//BIG STRING
    unordered_map<char,int>m;
    for(int i=0;i<B.length();i++)
    {
        m[B[i]]++;
    }
    int startofmin=-1;
    int start=0;
    int count=0;
    int minlength=INT_MAX;
    for(int i=0;i<A.length();i++)
    {
        if(m[A[i]]==0)
        {
            continue;
        }
        n[A[i]]++;
        if(m[A[i]]>=n[A[i]])
        {
            count++;
        }
        if(count==B.length())
        {
            while(m[A[start]]==0||n[A[start]]>m[A[start]])
            {
                if(n[A[start]]>m[A[start]])
                {
                    n[A[start]]--;
                }
                start++;
            }
            int length=i-start+1;
            if(length<minlength)
            {
                startofmin=start;
                minlength=length;
            }
        }
        
    }
    if(startofmin==-1)
    {
        return temp;
    }
    for(int i=startofmin;i<startofmin+minlength;i++)
    {
        temp+=A[i];
    }
    return temp;
}
