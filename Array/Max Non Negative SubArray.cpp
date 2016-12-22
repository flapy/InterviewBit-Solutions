vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    vector<int> temp;
    long long int sum=0;
    long long int ans=INT_MIN;
    vector <int> ans_ret;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(A[i]>=0)
        {
            sum+=A[i];
            flag=true;
            temp.push_back(A[i]);
        }
        else if(A[i]<0 && flag)
        {
            if(sum>ans)
            {
                ans=sum;
                ans_ret=temp;
            }
            else if(sum==ans)
            {
                if(temp.size()>ans_ret.size())
                {
                    ans_ret=temp;
                }
            }
            sum=0;
            temp.clear();
        }
    }
    if(sum>ans)
            {
                ans=sum;
                ans_ret=temp;
            }
            else if(sum==ans)
            {
                if(temp.size()>ans_ret.size())
                {
                    ans_ret=temp;
                }
            }
    return ans_ret;
}
