int Solution::reverse(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int cmp=INT_MAX;
    if(A<0)
    {
        A=-A;
        long long int rev=0;
        while(A)
        {
            int p=A%10;
            rev=rev*10+p;
            A/=10;
        }
        if(rev>cmp)
        return 0;
        else
        return (int)-rev;
    }
    else
    {
        int rev=0;
        while(A)
        {
            int p=A%10;
            rev=rev*10+p;
            A/=10;
        }
        if(rev>cmp)
        return 0;
        else
        return (int)rev;
    }
}
