double log(double base, double x) {
    return (log(x) / log(base));
}
bool Solution::isPower(int A) {
    if(A==1)
        return true;
    for(int i=2;i<=A;i++)
    {
        double ans=log(i,A);
        if(ans>=2.0)
        {
            if(fmod((float)ans,1)==0)
            {
                return true;
            }
        }
        else
            break;
    }
    return false;
}
