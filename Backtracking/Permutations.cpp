vector< vector<int> > ans;
void generateAllPermutations(vector<int> A,int st)
{
    if(st==A.size())
    {
        ans.push_back(A);
        return ;
    }
    for(int i=st;i<A.size();i++)
    {
        swap(A[i],A[st]);
        generateAllPermutations(A,st+1);
        swap(A[i],A[st]);
    }
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ans.clear();
    generateAllPermutations(A,0);
    return ans;
}
