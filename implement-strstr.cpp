int Solution::strStr(const string A, const string B) {
    //A is bigger
    int n=A.length();
    int m=B.length();
    if(m==0||n==0||m>n)
    {
        return -1;
    }
    if(A==B)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]==B[0])
        {
            int temp=i+1;
            for(int j=1;j<m;j++)
            {
                if(B[j]==A[temp]&&temp<n)
                {
                    temp++;
                    if(j==m-1)
                    {
                        return i;
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }
    return -1;
}
