vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    map<string,int> m;
    int n=B.size();
    int k;
    bool flag=true;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(flag)
        k=B[i].length();
        m[B[i]]++;
        flag=false;
    }
    int l=A.length();
    for(int i=0;i<l;i++)
    {
        int cnt=0;
        string str="";
        map<string,int> temp=m;
        bool ans=false;
        for(int j=i;j<l;j++)
        {
            cnt++;
            str+=(char)A[j];
            if(temp.size()==0)
            {
                ans=true;
                break;
            }
            if(cnt==k)
            {
                if(temp[str])
                {
                    temp[str]--;
                    if(temp[str]==0)
                        temp.erase(str);
                }
                else
                {
                    ans=false;
                    break;
                }
                str="";
                cnt=0;
            }
        }
        if(ans || temp.size()==0)
        {
            v.push_back(i);
        }
    }
    return v;
}
