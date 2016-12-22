int Solution::diffPossible(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int k=B;
    for(int i=0;i<n;i++)
    {
        int pos=-1;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]-A[i]<k)
                pos=i;
            if(k==A[j]-A[i])
                return 1;
            else if(k<A[j]-A[i])
                break;
        }
        if(pos!=-1)
        i=pos;
    }
    return 0;
}
