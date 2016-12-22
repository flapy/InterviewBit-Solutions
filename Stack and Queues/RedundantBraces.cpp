int Solution::braces(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l=A.length();
    stack<char> s;
    for(int i=0;i<l;i++)
    {
        if(A[i]!=')')
            s.push(A[i]);
        else
        {
            string temp="";
            while(s.top()!='(')
            {
                temp+=s.top();
                s.pop();
            }
            s.pop();
            //cout<<str<<endl;
            if(temp.length()==1)
            {
                return 1;
            }
            if("("+temp+")"=="()")
            {
                return 1;
            }
        }
    }
    return 0;
}
