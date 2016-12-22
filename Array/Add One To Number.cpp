vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string s="";
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        s+=to_string(A[i]);
    }
    bool last=true;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]!='9')
        {
            s[i]=((s[i]-48)+1)+48;
            last=false;
            break;
        }
        else
        {
            s[i]='0';
        }
    }
    if(last)
    {
        vector<int> ans;
        ans.push_back(1);
        for(int i=0;i<n;i++)
        {
            ans.push_back(s[i]-48);
        }
        return ans;
    }
    vector<int> ans;
    bool trail=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0' && trail)
        {
            continue;
        }
        else
        {
            trail=false;
            ans.push_back(s[i]-48);
        }
    }
    return ans;
}
