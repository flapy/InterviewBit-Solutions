int Solution::titleToNumber(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l=A.length();
    int cnt=0;
    long long int ans=0;
    for(int i=l-1;i>=0;i--)
    {
        ans+=pow(26,cnt++)*(A[i]-'A'+1);
    }
    return ans;
}
