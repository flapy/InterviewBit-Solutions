int Solution::trailingZeroes(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int sum=0;
    int i=1;
    while(1)
    {
        int temp=A/pow(5,i);
        sum+=temp;
        i++;
        if(temp==0)
            break;
    }
    return sum;
}
