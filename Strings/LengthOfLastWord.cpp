int Solution::lengthOfLastWord(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l=A.length();
    string word="";
    for(int i=0;i<l;i++)
    {
        if(A[i]==' ')
        {
            while(A[i]==' ')
                i++;
            i--;
            if(i+1<l)
            {
                word="";
            }
            
        }
        else
        {
            word+=A[i];
        }
    }
    return word.length();
}
