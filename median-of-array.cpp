double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()>B.size())
    {
        return findMedianSortedArrays(B,A);
    }
    int x=A.size();
    int y=B.size();
    int s=0;
    int e=x;
    while(s<=e)
    {
        int midx=(s+e)/2;
        int midy=(x+y+1)/2-midx;
        int maxleftx=(midx==0)?INT_MIN:A[midx-1];
        int maxlefty=(midy==0)?INT_MIN:B[midy-1];
        int minrightx=(midx)==x?INT_MAX:A[midx];
        int minrighty=(midy)==y?INT_MAX:B[midy];
        if(maxleftx<=minrighty&&maxlefty<=minrightx)
        {
            if((x+y)%2==0)
            {
                return (double)(max(maxleftx,maxlefty)+min(minrightx,minrighty))/2;
            }
            else
            {
                return (double)(max(maxleftx,maxlefty));
            }
        }
        if(maxleftx>minrighty)
        {
            e=midx-1;
        }
        else if(maxlefty>minrightx)
        {
            s=midx+1;
        }
    }
    
}
