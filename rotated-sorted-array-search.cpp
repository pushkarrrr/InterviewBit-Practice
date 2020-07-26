int Solution::search(const vector<int> &A, int B) {
    int n=A.size();
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(A[mid]==B)
        {
            return mid;
        }
        //CHECK LEFT PART
        if(A[s]<=A[mid])
        {
            if(B>=A[s]&&B<=A[mid])
            {
                e=mid-1;
                continue;
            }
            else
            {
                s=mid+1;
                continue;
            }
        }
        //RIGHT PART
        if(B>=A[mid]&&B<=A[e])
        {
            s=mid+1;
            continue;
        }
        else
        {
           e=mid-1;
           continue;
        }
    }
    return -1;
}
