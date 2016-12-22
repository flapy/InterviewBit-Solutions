#include<algorithm>
bool cmp(int a1,int a2)
{
    string s1=to_string(a1);
    string s2=to_string(a2);
    return (s1+s2)>(s2+s1);
}
string Solution::largestNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    vector<int> v =A;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    return "0";
    sort(v.begin(),v.end(),cmp);
    
    string ans="";
    for(int i=0;i<n;i++)
    {
        ans+=to_string(v[i]);
    }
    return ans;
}
