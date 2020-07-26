int Solution::evalRPN(vector<string> &A) {
    stack<int>s;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        if(A[i]=="+"||A[i]=="-"||A[i]=="*"||A[i]=="/")
        {
            int x1=s.top();
            s.pop();
            int x2=s.top();
            s.pop();
            if(A[i]=="+")
            {
                s.push(x1+x2);
            }
            if(A[i]=="-")
            {
                s.push(x2-x1);
            }
            if(A[i]=="*")
            {
                s.push(x1*x2);
            }
            if(A[i]=="/")
            {
                s.push(x2/x1);
            }
        }
        else
        {
            s.push(stoi(A[i]));
        }
    }
    return s.top();
}
