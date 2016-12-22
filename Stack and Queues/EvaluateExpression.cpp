bool isExpression(string str)
{
    int l=str.length();
    if(l==1 && isdigit(str[0]))
    {
        return false;
    }
    if(l==1 && str[0]=='-')
        return true;
    for(int i=0;i<l;i++)
    {
        if(i==0 && str[i]=='-')
            continue;
        if(!isdigit(str[i]))
            return true;
    }
    return false;
}
int sToi(string str)
{
    int l=str.length();
    int ans=pow(10,l-1);
    int sum=0;
    int i=0;
    if(str[0]=='-')
        i=1;
    if(i==1)
        ans/=10;
    for(;i<l;i++)
    {
        sum+=(str[i]-48)*ans;
        ans/=10;
    }
    //cout<<"Ori"<<sum<<endl;
    if(str[0]=='-')
    return -sum;
    
    return sum;
}
int Solution::evalRPN(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    stack<int> s;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        if(isExpression(A[i]))
        {
            //cout<<A[i]<<endl;
            int l=A[i].length();
            for(int j=0;j<l;j++)
            {
                if(isdigit(A[i][j]))
                    s.push(A[i][j]-48);
                else
                {
                    int b=s.top();
                    s.pop();
                    int a=s.top();
                    s.pop();
                    if(A[i][j]=='+')
                        s.push(a+b);
                    else if(A[i][j]=='-')
                        s.push(a-b);
                    else if(A[i][j]=='*')
                        s.push(a*b);
                    else if(A[i][j]=='/')
                        s.push(a/b);
                }
            }
        }
        else
        {
            //cout<<"Yaha"<<sToi(A[i])<<endl;
            s.push(sToi(A[i]));
        }
    }
    return s.top();
}
