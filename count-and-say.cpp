string Solution::countAndSay(int n) {
    if(n==1)
    {
        return to_string(1);
    }
    if(n==2)
    {
        return to_string(11);
    }

    string prev="11";
    for(int i=3;i<=n;i++)
    {
        prev+='+';
       int count=1;
       string temp="\0";
       for(int i=1;i<prev.length();i++)
       {
           if(prev[i]!=prev[i-1])
           {
               temp+=to_string(count);
               temp+=prev[i-1];
               count=1;
           }
           else
           {
               count++;
           }
       }
       prev=temp;
    }
    return prev;
}
