int fibo(int n)
{
    int f=1;
    int s=1;
    int l;
    for(int i=3;i<=n+1;i++)
    {
        l=f+s;
        f=s;
        s=l;
    }
    return l;
}
int Solution::climbStairs(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return fibo(A);
}
