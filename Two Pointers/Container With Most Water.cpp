int Solution::maxArea(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int i=0;
    int j=n-1;
    int ans=INT_MIN;
    vector<int> a=A;
    while(i<=j)
    {
        ans=max((j-i)*min(a[i],a[j]),ans);
        if(a[i]<a[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}
