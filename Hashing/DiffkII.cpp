int Solution::diffPossible(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unordered_map<int,int> m;
    int l=A.size();
    for(int i=0;i<l;i++)
    {
        m[A[i]]++;
    }
    for(int i=0;i<l;i++)
    {
        int reqd=A[i]+B;
        if(B==0)
        {
            if(m[A[i]]>1)
                return 1;
        }
        else if(m[reqd])
        {
            return 1;
        }
    }
    return 0;
}
