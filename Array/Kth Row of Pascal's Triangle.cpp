vector<int> Solution::getRow(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> prev;
    vector<int> cur;
    int k=A;
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0)
                cur.push_back(1);
            else if(j==i)
                cur.push_back(prev[j-1]);
            else
                cur.push_back(prev[j]+prev[j-1]);
        }
        prev=cur;
        cur.clear();
    }
    return prev;
}
