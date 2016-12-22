string Solution::simplifyPath(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l=A.length();
    string ans="";
    stack<string> s;
    for(int i=0;i<l;i++)
    {
        //cout<<A[i]<<endl;
        if(A[i]=='/')
        {
            //cout<<"Hello"<<i<<endl;
            if(s.empty())
                s.push("/");
            else if(!s.empty() && s.top()!="/")
                s.push("/");
            
            i++;
            string str="";
            while(A[i]!='/' && A[i]!='\0')
            {
                str+=A[i];
                i++;
            }
            i--;
            //cout<<str<<endl;
            if(str=="..")
            {
                if(!s.empty())
                    s.pop();
                if(!s.empty())
                    s.pop();
            }
            else if(str==".")
            {
                if(!s.empty())
                s.pop();
                //s.push("\\");
            }
            else if(str!="")
            {
                s.push(str);
                //cout<<"Pushed"<<str<<endl;
            }
        }
    }
    stack<string> s1;
    while(!s.empty())
    {
        s1.push(s.top());
        s.pop();
    }
    while(!s1.empty())
    {
        ans+=s1.top();
        s1.pop();
    }
    if(ans=="/")
        return ans;
    if(ans=="")
        return "/";
    if(ans[ans.length()-1]=='/')
        return ans.substr(0,ans.length()-1);
    return ans;
}
