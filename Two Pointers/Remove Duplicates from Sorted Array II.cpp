int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    int cnt=0;
    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            if(A[i]==A[i-1])
            {
                cnt++;
                if(cnt<=2)
                {
                    A[pos++]=A[i];
                }
            }
            else
            {
                A[pos++]=A[i];
            }
            continue;
        }
        if(i+1<n && A[i]==A[i+1])
        {
            cnt++;
            if(cnt<=2)
            {
                A[pos++]=A[i];
            }
        }
        else
        {
            cnt++;
            if(cnt<=2)
            {
                A[pos++]=A[i];
            }
            cnt=0;
        }
    }
    return pos;
}
