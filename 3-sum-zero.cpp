//Only 3sum programmers will get xD
vector<vector<int> > Solution::threeSum(vector<int> &a) {
    vector<vector<int>>o;
    int n=a.size();
    sort(a.begin(),a.end());
    int j=0;
    for(int i=0;i<n-2;i++)
    {
        int left=i+1;
        int right=n-1;
        while(right>left)
        {
            long long int sum=(long long int)a[i]+(long long int)a[left]+(long long int)a[right];
            if(sum==0)
            {
                vector<int> temp = {a[i], a[left], a[right]};
                int flag=0;
                for(int k=0;k<o.size();k++)
                {
                    if(temp==o[k])
                    {
                        flag=1;
                    }
                }
                if(flag==0)
                {
                    o.push_back(temp);
                }
                
                //eliminate duplicates
                left++;
                right--;
            }
            else if(sum>0)
            {
                right--;
            }
            else if(sum<0)
            {
                left++;
            }
        }
    }
    return o;
}
