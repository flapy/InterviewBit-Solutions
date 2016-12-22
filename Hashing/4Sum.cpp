#include<bits/stdc++.h>
vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    map<int,list<pair<int,int> > > m;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            m[A[i]+A[j]].push_back(make_pair(i,j));
        }
    }
    vector<vector<int> > ans; 
    map<pair<int,int> ,bool> flag;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            pair<int,int> p1={i,j};
            int sum=B-(A[i]+A[j]);
            if(m[sum].size())
            {
                vector<int> v;
                v.push_back(A[i]);
                v.push_back(A[j]);
                list<pair<int,int> > ::iterator itr;
                for(itr=m[sum].begin();itr!=m[sum].end();itr++)
                {
                    if(itr->first!=p1.second && itr->first!=p1.first && itr->second!=p1.first && itr->second!=p1.second)
                    {
                        v.push_back(A[itr->first]);
                        v.push_back(A[itr->second]);
                        ans.push_back(v);
                        v.pop_back();
                        v.pop_back();
                    }
                }
            }
        }
    }
    set<vector<int> >s;
    int l=ans.size();
    for(int i=0;i<l;i++)
    {
        sort(ans[i].begin(),ans[i].end());
        s.insert(ans[i]);
    }
    vector<vector<int> > fi;
    set<vector<int> > ::iterator itr;
    for(itr=s.begin();itr!=s.end();itr++)
    {
        vector<int> temp=*itr;
        fi.push_back(temp);
        int l=temp.size();
    }
    return fi;
}
