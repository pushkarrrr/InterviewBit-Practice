int Solution::numSetBits(unsigned int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count=0;
    while(n>0)
    {
        count++;
        n=n&(n-1);
    }
    return count;
}
