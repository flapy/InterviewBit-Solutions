int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int ans=0;
    int i,j;
    bool flag=true;
    for(int i=0;i<n;i++)
        if(A[i]!=B)
            ans++;
    for(i=0;i<n;i++)
    {
        if(A[i]==B)
        {
            if(flag)
                j=i+1;
            flag=false;
            for(;j<n;j++)
            {
                if(A[j]!=B)
                {
                    swap(A[i],A[j]);
                    j++;
                    break;
                }
            }
        }
    }
    return ans;
}
