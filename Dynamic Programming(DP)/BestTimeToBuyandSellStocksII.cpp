int Solution::maxProfit(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ans=0;
    for(int i=1;i<A.size();i++)
    {
        ans+=(A[i]-A[i-1]>=0?A[i]-A[i-1]:0);
    }
    return ans;
}
