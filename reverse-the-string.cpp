string Solution::solve(string a) {
    //ALGO 1) REVERSE STRING 2) INSERT SPACE AT LAST AND REVERSE WHEN SPACE ENCOUNTER
    int l=a.length();
    reverse(a.begin(),a.end());
    a+=' ';
    int j=0;
    for(int i=0;i<=l;i++)
    {
        if(a[i]==' ')
        {
            reverse(a.begin()+j,a.begin()+i);
            j=i+1;
        }
    }
    a.pop_back();
    return a;
}
