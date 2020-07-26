string Solution::addBinary(string a, string b) {
    int i=a.length()-1;
    int j=b.length()-1;
    string ans="";
    int digit=0;
    while(i>=0||j>=0||digit==1)
    {
        if(i>=0)
        {
            digit+=a[i]-'0';
        }
        if(j>=0)
        {
            digit+=b[j]-'0';
        }
        ans=to_string(digit%2)+ans;
        digit=digit/2;
        i--;
        j--;
    }
    return ans;
    
}
