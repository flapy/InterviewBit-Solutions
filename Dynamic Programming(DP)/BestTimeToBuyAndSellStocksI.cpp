int Solution::maxProfit(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ma=INT_MIN;
    int n=A.size();
    if(n==0)
        return 0;
    int dp[n+2];
    for(int i=n-1;i>=0;i--)
    {
        ma=max(ma,A[i]);
        dp[i]=ma;
    }
    int ans=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        int temp=dp[i+1]-A[i];
        if(temp>=0)
        {
            ans=max(dp[i+1]-A[i],ans);
        }
    }
    return ans==INT_MIN?0:ans;
}
