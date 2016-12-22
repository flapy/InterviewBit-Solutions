/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool cmp(Interval i1,Interval i2)
{
   return i1.start<i2.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    vector<Interval> v;
    sort(A.begin(),A.end(),cmp);
    for(int i=0;i<n;i++)
    {
        int start=A[i].start;
        int end=A[i].end;
        i++;
        for(;i<n;i++)
        {
            if(A[i].start<=end)
            {
                end=max(A[i].end,end);
            }
            else
                break;
        }
        i--;
        Interval in;
        in.start=start;
        in.end=end;
        v.push_back(in);
    }
    return v;
}
