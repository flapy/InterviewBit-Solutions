set<int> foo(int A,int B)
{
    string s=to_string(A);
    queue<string> q;
    set<int> v;
    for(int i=0;i<=9;i++)
    q.push(to_string(i));
    while(!q.empty())
    {
        string u=q.front();
        int num=atoi(u.c_str());
        if(num<=B && num>=A)
        {
            v.insert(num);
        }
        char ch=(char)u[u.length()-1];
        if(ch!='9')
        {
            string temp=u;
            temp+=(char)(ch+1);
            if(atoi(temp.c_str())<=B)
                q.push(temp);
        }
        if(ch!='0')
        {
            string temp=u;
            temp+=(char)(ch-1);
            if(atoi(temp.c_str())<=B)
                q.push(temp);
        }
        q.pop();
    }
    return v;
}
vector<int> Solution::stepnum(int A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A>B)
    {
        vector<int> vv;
        return vv;
    }
    set<int> v=foo(A,B);
    vector<int> v1;
    set<int> ::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
        v1.push_back(*itr);
    return v1;
}
