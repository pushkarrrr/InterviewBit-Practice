int Solution::lengthOfLongestSubstring(string A) {
    int currlength=0;
    int maxlength=0;
    map<int,int>m;
    int n=A.length();
    for(int i=0;i<n;i++)
    {
        m[A[i]]=-1;
    }
    for(int i=0;i<n;i++)
    {
        int last_occ=m[A[i]];
        if(last_occ==-1||(i-currlength)>last_occ)
        {
            currlength++;
        }
        else
        {   maxlength=max(maxlength,currlength);
            currlength=i-last_occ;
        }
        maxlength=max(maxlength,currlength);
        m[A[i]]=i;
    }
    
    return maxlength;
    
}
