int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(x==0)
        return 0;
    if(n==0)
    {
        return 1;
    }
    long long ans=pow(x,n/2,d);
    if (n%2 == 0)
        return (int)(((ans*ans)%d+d)%d);
    else
        return (int)(((x*((ans*ans)%d))%d+d)%d);
}
