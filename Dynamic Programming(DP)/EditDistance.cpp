int Solution::minDistance(string A, string B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.length();
    int m=B.length();
    int dp[n+2][m+2];
    int cnt=1;
    for(int j=m-1;j>=0;j--)
    {
        dp[n][j]=cnt++;
    }
    cnt=1;
    for(int j=n-1;j>=0;j--)
    {
        dp[j][m]=cnt++;
    }
    dp[n][m]=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(A[i]==B[j])
            {
                dp[i][j]=dp[i+1][j+1];
            }
            else
            {
                dp[i][j]=min(dp[i+1][j],min(dp[i+1][j+1],dp[i][j+1]))+1;
            }
        }
    }
    return dp[0][0];
}
