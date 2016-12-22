map<char,string > m;
void init()
{
    m['1']="1";
    m['0']="0";
    m['2']="abc";
    m['3']="def";
    m['4']="ghi";
    m['5']="jkl";
    m['6']="mno";
    m['7']="pqrs";
    m['8']="tuv";
    m['9']="wxyz";
}
string s;
vector<string> ans;
void foo(int i,string str)
{
	if(i==s.length())
	{
        ans.push_back(str);
		return ;
	}
	char ch=s[i];
	for(int j=0;j<m[ch].length();j++)
	{
		if(j==0)
		{
			str+=(char)m[ch][j];
		}
		else
		{
			str[i]=m[ch][j];
		}
		//cout<<str[i]<<endl;
		foo(i+1,str);
	}
}
vector<string> Solution::letterCombinations(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    s=A;
    init();
    ans.clear();
    foo(0,"");
    sort(ans.begin(),ans.end());
    return ans;
}
