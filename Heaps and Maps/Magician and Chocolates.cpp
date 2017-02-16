#define MOD 1000000007
int Solution::nchoc(int A, vector<int> &B) {
    map <int,int> m;
    int l = B.size();
    for (int i = 0; i < l; i++)
        m[B[i]]++;
    map <int,int> :: reverse_iterator itr;
    long long int ans = 0;
    while (A--)
    {
        if (!m.empty())
        {
            itr = m.rbegin();
            long long int val = itr -> first;
            ans = (ans + val) % MOD;
            m[val]--;
            if (m[val] == 0)
                m.erase(val);
            m[val / 2]++;
        }
    }
    return ans;
}
