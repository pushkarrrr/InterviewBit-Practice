int Solution::singleNumber(const vector<int> &A) {
    int count[32]={0};
    int n=A.size();
    for(int j=0;j<n;j++)
    {
        int val=A[j];
        int i=0;
        while(val>0)
        {
            if(val&1==1)
            {
                count[i]+=1;
            }
            val=val>>1;
            i++;
        }
    }
    int ans=0;
    for(int i=0;i<32;i++)
    {
        count[i]=count[i]%3;
    }
    for(int i=0;i<32;i++)
    {
        if(count[i]==1)
        {
            ans+=pow(2,i);
        }
    }
    return ans;
    
}
