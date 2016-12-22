int Solution::minCut(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int dp[n+2][n+2];
    bool dpHelp[n+2][n+2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=INT_MAX;
            dpHelp[i][j]=false;
        }
    }
    for(int i=0;i<n;i++)
        dp[i][i]=0;
    for(int i=0;i<n;i++)
        dpHelp[i][i]=true;
    for(int l=2;l<=n;l++)
    {
        for(int i=0;i<=n-l;i++)
        {
            int j=i+l-1;
            if(l==2)
            {
                if(A[i]==A[j])
                {
                    dpHelp[i][j]=true;
                }
                else
                {
                    dpHelp[i][j]=false;
                }
            }
            else
            {
                if(A[i]==A[j])
                {
                    dpHelp[i][j]=dpHelp[i+1][j-1];
                }
                else
                {
                    dpHelp[i][j]=false;
                }
            }
            if(!dpHelp[i][j])
            {
                for(int k=i;k<=j-1;k++)
                {
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+1);
                }
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    return dp[0][n-1];
}
