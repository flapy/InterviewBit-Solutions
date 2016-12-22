vector<int> Solution::dNums(vector<int> &A, int B) {
    int n=A.size();
    vector<int> v;
    map<int,int> m;
    int cnt=0;
    int pos=0;
    int k=B;
    for(int i=0;i<=n;i++)
    {
       if(cnt==k)
       {
            v.push_back(m.size());
            m[A[pos]]--;
            if(m[A[pos]]<=0)
                m.erase(A[pos]);
            pos++;
            //cnt=1;
            if(i!=n)
                m[A[i]]++;
       }
       else
       {
           m[A[i]]++;
           cnt++;
       }
    }
    return v;
}
