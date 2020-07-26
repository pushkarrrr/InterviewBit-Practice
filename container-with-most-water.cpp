int Solution::maxArea(vector<int> &A) {
    int n=A.size();
    if(n<=1)
    {
        return 0;
    }
    int left=0;
    int right=n-1;
    int maxarea=INT_MIN;
    while(right>left)
    {
        int area=min(A[right],A[left])*(right-left);
        if(area>maxarea)
        {
            maxarea=area;
        }
        if(A[right]>A[left])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maxarea;
}
