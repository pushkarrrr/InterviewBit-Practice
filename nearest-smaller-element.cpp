vector<int> Solution::prevSmaller(vector<int> &A) {
    int n=A.size();
    vector<int>G;   
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        while(!s.empty()&&A[s.top()]>=A[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            G.push_back(-1);
        }
        else
        {
            G.push_back(A[s.top()]);
        }
        s.push(i);
    }
    return G;
}
