vector<int> Solution::prevSmaller(vector<int> &A) {
    int ans=INT_MAX;
    int n=A.size();
    stack<int> s;
    s.push(A[0]);
    vector<int> v;
    v.push_back(-1);
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && s.top()>=A[i])
        {
            s.pop();
        }
        v.push_back(s.empty()?-1:s.top());
        s.push(A[i]);
    }
    return v;
}
