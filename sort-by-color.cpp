void Solution::sortColors(vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int zerocount=0,onecount=0,twocount=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==0)
        {
            zerocount++;
        }
        else if(a[i]==1)
        {
            onecount++;
        }
        else
        {
            twocount++;
        }
    }
    int j=0;
    while(zerocount!=0)
    {
        a[j++]=0;
        zerocount--;
    }
    while(onecount!=0)
    {
        a[j++]=1;
        onecount--;
    }
    while(twocount!=0)
    {
        a[j++]=2;
        twocount--;
    }
}
