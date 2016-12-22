int Solution::minPathSum(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int N=A.size();
    if(N==0)
    {
        return 0;
    }
    int M=A[0].size();
    int dp[N+2][M+2];
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=M;j++)
        {
            dp[i][j]=0;
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(i==0 && j==0)
            {
                dp[i][j]=A[i][j];
            }
            else if(i==0)
            {
                dp[i][j]=dp[i][j-1]+A[i][j];
            }
            else if(j==0)
            {
                dp[i][j]=dp[i-1][j]+A[i][j];
            }
            else
            {
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+A[i][j];
            }
        }
    }
    return dp[N-1][M-1];
        
}
