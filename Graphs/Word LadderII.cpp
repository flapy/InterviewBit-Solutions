string final;
vector <vector<string> > ans;
int mi;
void init()
{
    mi = INT_MAX;
    ans.clear();
}
bool foo(string s,string che)
{
    int cnt = 0;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] != che[i])
        {
            cnt++;
        }
    }
    return (cnt == 1);
}
void dfs(string u,vector<string> v,vector <string> dict,map <string,bool> visit)
{
    if (u == final)
    {
        v.push_back(u);
        ans.push_back(v);
        mi = min(mi,(int)v.size());
        return ;
    }
    v.push_back(u);
    int n = dict.size();
    visit[u] = true;
    for (int i = 0; i < n; i++)
    {
        if (!visit[dict[i]])
        {
            if (foo(u,dict[i]))
            {
                visit[dict[i]] = true;
                dfs(dict[i],v,dict,visit);
            }
        }
    }
}
vector<vector<string> > Solution::findLadders(string start, string end, vector<string> &dict) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    init();
    final = end;
    vector <string> v;
    map <string,bool> visit; 
    dfs(start,v,dict,visit);
    int n = ans.size();
    vector <vector <string> > finalAns;
    for (int i = 0; i < n; i++)
    {
        if (ans[i].size() == mi)
            finalAns.push_back(ans[i]);
    }
    return finalAns;
}
