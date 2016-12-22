int Solution::lengthOfLongestSubstring(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l=A.length();
    int ans=INT_MIN;
    for(int i=0;i<l;i++)
    {
        int a[300]={0};
        a[A[i]]++;
        int cnt=1;
        ans=max(ans,cnt);
        for(int j=i+1;j<l;j++)
        {
            if(a[A[j]])
            {
                break;
            }
            else
            {
                a[A[j]]++;
                cnt++;
                ans=max(ans,cnt);
            }
        }
    }
    return ans;
}
