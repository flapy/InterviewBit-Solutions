int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int last;
    int pos=0;
    if(n==1)
        return 1;
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            if(A[i]!=A[pos-1])
            A[pos++]=A[i];
            break;
        }
        if(A[i]==A[i+1])
        {
            continue;
        }
        else
        {
            A[pos++]=A[i];
        }
    }
    return pos;
}
