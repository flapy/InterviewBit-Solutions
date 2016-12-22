int Solution::trap(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int maxLeftArray[A.size()];
    int maxRightArray[A.size()];
    int n=A.size();
    maxLeftArray[0]=A[0];
    maxRightArray[n-1]=A[n-1];
    int ma=A[0];
    for(int i=1;i<n;i++)
    {
        maxLeftArray[i]=max(A[i],maxLeftArray[i-1]);
    }
    for(int i=n-2;i>=0;i--)
    {
        maxRightArray[i]=max(A[i],maxRightArray[i+1]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans += min(maxLeftArray[i],maxRightArray[i]) - A[i];
    }
    return ans;
}
