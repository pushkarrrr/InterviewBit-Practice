int Solution::canJump(vector<int> &a) {
    int n=a.size();
    int lastgood=n-1;
    for(int i=lastgood;i>=0;i--)
    {
        if(i+a[i]>=lastgood)
        {
            lastgood=i;
        }
    }
    return lastgood==0;
}
