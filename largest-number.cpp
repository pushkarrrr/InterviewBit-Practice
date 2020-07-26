bool compare(string X,string Y)
{
    string XY=X.append(Y);
    string YX=Y.append(X);
    if(XY>=YX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
string Solution::largestNumber(const vector<int> &a) {
    int n=a.size();
    vector<string>s;
    for(int i=0;i<n;i++)
    {
        s.push_back(to_string(a[i]));
    }
    sort(s.begin(),s.end(),compare);
    string o="\0";
    for(int i=0;i<n;i++)
    {
        o+=s[i];
    }
    int i=0;
    while(o[i]=='0'){
        i++;
    }
    if(i==o.length())
     o="0";
    return o;
    
}
