struct TrieNode
{
	map<char,TrieNode*> m;
	int cnt;
	//bool end;
}*root=NULL;
void init()
{
	root=new TrieNode();
}
void insert(string s)
{
	int l=s.length();
	TrieNode *itr=root;
	for(int i=0;i<l;i++)
	{
	    //cout<<s[i]<<" ";
		if(itr->m[s[i]])
		{
			itr=itr->m[s[i]];
			itr->cnt++;
            //if(i==l-1)
            //itr->end=true;
		}
		else
		{
			TrieNode *temp=new TrieNode();
            //if(i==l-1)
                //temp->end=true;
			itr->m[s[i]]=temp;
			itr=temp;
			itr->cnt++;
		}
	}
}
string find(string str)
{
    TrieNode *itr=root;
    int l=str.length();
    string ans="";
    for(int i=0;i<l;i++)
    {
        // cout<<str[i]<<" ";
        // cout<<itr->m[str[i]]->end;
        if(itr->m[str[i]] && itr->m[str[i]]->cnt==1)
        {
            return ans+str[i];
        }
        else
        {
            itr=itr->m[str[i]];
            ans+=str[i];
        }
    }
    return ans;
}
vector<string> Solution::prefix(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    init();
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        string str=A[i];
        insert(str);
    }
    vector<string > v;
    for(int i=0;i<n;i++)
    {
        v.push_back(find(A[i]));
    }
    return v;
}
