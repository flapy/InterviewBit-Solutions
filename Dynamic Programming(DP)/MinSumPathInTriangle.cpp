int Solution::minimumTotal(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int  n=A.size();
    int dp[n+2][n+2];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        int m=A[i].size();
        for(int j=0;j<m;j++)
        {
            if(i!=0 && j==0)
            {
                dp[i][j]=min(dp[i-1][j],INT_MAX)+A[i][j];
            }
            else if(i==0)
            {
                dp[i][j]=A[i][j];
            }
            else
            {
                dp[i][j]=min((j!=m-1?dp[i-1][j]:INT_MAX),min(dp[i-1][j-1],INT_MAX))+A[i][j];
            }
        }
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        ans=min(ans,dp[n-1][i]);
    }
    return ans;
}
