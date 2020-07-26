string Solution::intToRoman(int number) {
    int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;
    string o="\0";
    while(number>0)
    {
        int division=number/num[i];
        number=number%num[i];
        while(division--)
        {
            o+=sym[i];
        }
        i--;
    }
    return o;
}
