int Solution::coverPoints(vector<int> &x, vector<int> &y) {
    int minimum=0;
    for(int i=0;i<(x.size()-1);i++)
    {
        if(abs(x[i]-x[i+1])<=abs(y[i]-y[i+1]))
         minimum+=abs(y[i]-y[i+1]);
        else{
        minimum+=abs(x[i]-x[i+1]);
        }
    }
    return minimum;
}
