int Solution::numDecodings(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l=A.length();
    int dp[l];
    for(int i=0;i<l;i++)
        dp[i]=0;
    for(int i=0;i<l;i++)
    {
        if(i==0 && A[i]!='0')
            dp[0]=1;
        else if(i==1)
        {
            if(A[i]!='0')
                dp[i]=dp[i-1];
            int p=A[i-1]-48;
            int c=A[i]-48;
            int tot=p*10+c;
            if(tot<=26 && tot>9)
            {
                dp[i]++;
            }
        }
        else
        {
            if(A[i]!='0')
            {
                dp[i]=dp[i-1];
            }
            int p=A[i-1]-48;
            int c=A[i]-48;
            int tot=p*10+c;
            if(tot<=26 && tot>9)
            {
                dp[i]+=dp[i-2];
            }
        }
    }
    return dp[A.length()-1];
}
