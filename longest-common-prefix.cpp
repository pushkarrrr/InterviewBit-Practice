string Solution::longestCommonPrefix(vector<string> &A) {
    int minlength=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        if(A[i].length()<minlength)
        {
            minlength=A[i].length();
        }
    }
    string o;
    char value;
    for(int i=0;i<minlength;i++)
    {
        for(int j=0;j<A.size();j++)
        {
            char value=A[0][i];
            if(A[j][i]==value)
            {
                if(j==A.size()-1)
                {
                    o+=value;
                }
            }
            else
            {
                return o;
            }
        }
    
    }
    return o;
}
