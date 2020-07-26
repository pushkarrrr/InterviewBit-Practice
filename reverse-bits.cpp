unsigned int Solution::reverse(unsigned int a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int b=0;
    int i=0;
    while(a>0)
    {
        b+=(pow(2,31-i)*(a&1));
        a=a>>1;
        i++;
    }
    return b;
}
