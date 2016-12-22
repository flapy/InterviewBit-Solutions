int Solution::maxPoints(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    int final_ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        pair<int,int> p={A[i],B[i]};
        pair<int,int> cur;
        map<pair<int,int> ,int> m;
        int k=1;
        for(int j=i+1;j<n;j++)
        {
            cur={A[j],B[j]};
            int num=cur.second-p.second;
            int den=cur.first-p.first;
            if(num==0 && den==0)
            {
                k++;
                continue;
            }
            if(num<0 && den<0)
                num=-num,den=-den;
            else if(num<0 || den<0)
            {
                num=abs(num);
                den=abs(den);
                num=-num;
            }
            if(den==0)
            {
                m[{INT_MAX,INT_MAX}]++;
                continue;
            }
            else if(num==0)
            {
                m[{0,0}]++;
                continue;
            }
            int gc=__gcd(abs(num),abs(den));
            num/=gc;
            den/=gc;
            // if(num==1 && den==2)
            //     cout<<A[j]<<" "<<B[j]<<endl;
            m[{num,den}]++;
        }
        int ans=INT_MIN;
        map<pair<int,int>,int> ::iterator itr;
        //cout<<A[i]<<" "<<B[i]<<endl;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            ans=max(ans,itr->second);
            // if(itr->second==6)
            //     cout<<itr->first.first<<" dsd "<<itr->first.second<<endl;
        }
        final_ans=max(final_ans,ans==INT_MIN?k:ans+k);
    }
    return final_ans;
}
