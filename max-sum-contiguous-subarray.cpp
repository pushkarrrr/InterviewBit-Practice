int Solution::maxSubArray(const vector<int> &A) {
    int best_sum=INT_MIN;
    int current_sum=0;
    for(int i=0;i<A.size();i++)
    {
        current_sum+=A[i];
        if(best_sum<current_sum)
        {
            best_sum=current_sum;
        }
        if(current_sum<0)
        {
            current_sum=0;
        }
        
    }
    return best_sum;
}
