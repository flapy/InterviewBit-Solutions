vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l=A.size();
    vector<vector<int> > v;
    map<string,vector<int> > m;
    for(int i=0;i<l;i++)
    {
        string temp=A[i];
        sort(temp.begin(),temp.end());
        m[temp].push_back(i+1);
    }
    map<string,vector<int> > :: iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        v.push_back(itr->second);
    }
    return v;
}
