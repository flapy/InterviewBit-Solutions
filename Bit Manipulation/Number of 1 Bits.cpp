int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int cnt=0;
    long long int a=A;
    for(long long i=0;i<64;i++)
    {
        if(a & ((long long int)1<<i))
        {
            cnt++;
        }
    }
    return cnt;
}
