//Only 3-sum programmers will get xD
int Solution::threeSumClosest(vector<int> &a, int target) {
    int n=a.size();
    sort(a.begin(),a.end());
    int closest=a[0]+a[1]+a[n-1];
    for(int i=0;i<n-2;i++)
    {
        int left=i+1;
        int right=n-1;
        while(right>left)
        {
            int diff=a[i]+a[left]+a[right];
            if(abs(diff-target)<abs(closest-target))
            {
                closest=diff;
            }
            if(diff>target)
            {
                right--;
            }
            if(diff<target)
            {
                left++;
            }
            if(diff==target)
            {
                return diff;
            }
        }
    }
    return closest;
}
