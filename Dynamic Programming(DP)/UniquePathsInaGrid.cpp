int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int dp[103][104]={0};
    int n=A.size();
    int m=A[0].size();
    int ans=1;
    for(int i=0;i<n;i++)
    {
        if(!A[i][0] && ans)
        {
            dp[i][0]=1;
        }
        else
        {
            ans=0;
            dp[i][0]=0;
        }
    }
    ans=1;
    for(int i=0;i<m;i++)
    {
        if(!A[0][i] && ans)
            dp[0][i]=1;
        else
        {
            ans=0;
            dp[0][i]=0;
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(!A[i][j])
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[n-1][m-1];
}
