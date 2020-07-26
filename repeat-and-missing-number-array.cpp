vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    vector<int>a;
    a=A;
    vector<int>o;
    for(int i=0;i<n;i++)
    {
        int index=abs(a[i])-1;
        if(a[index]>0)
        {
            a[index]=-a[index];
        }
        else
        {
            o.push_back(index+1);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            o.push_back(i+1);
        }
    }
    return o;
}
