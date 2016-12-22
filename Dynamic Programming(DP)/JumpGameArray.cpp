int Solution::canJump(vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int dp[a.size()+2];
    int n=a.size();
    if(n==1)
        return 1;
	for(int i=0;i<n;i++)
	{
		dp[i]=INT_MAX;
	}
	dp[0]=0;
	
	for(int i=0;i<n;i++)
	{
	    if(dp[i]==INT_MAX)
	        continue;
		if(a[i]==0)
			continue;
		int st=i+1;
		int end=a[i]+i;
		for(int j=st;j<=end;j++)
		{
			if(j==n)
				break;
			if(dp[j]==INT_MAX)
		    {
		        dp[j]=dp[i]+1;
		        continue;
		    }
			if(dp[j]>dp[i]+1)
			{
				dp[j]=dp[i]+1;
			}
		}
	}
	return (dp[n-1]==INT_MAX?0:1);
}
