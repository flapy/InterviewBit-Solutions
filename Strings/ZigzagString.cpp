string Solution::convert(string A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(B==1)
        return A;
    string arr[B+2];
    int row=0;
    bool flag=true;
    int n=A.length();
    for(int i=0;i<n;i++)
    {
        arr[row].push_back(A[i]);
        if(row==B-1)
        {
            flag=false;
        }
        else if(row==0)
        {
            flag=true;
        }
        if(flag)
            row++;
        else
            row--;
    }
    string ans="";
    for(int i=0;i<B;i++)
    {
        ans+=arr[i];
    }
    return ans;
}
