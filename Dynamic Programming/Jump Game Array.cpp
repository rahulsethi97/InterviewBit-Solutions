int func(vector<int> A,int len)
{
    int min;
    min=A[0];
    
    for(int i=1;i<len;i++)
    {
        if(i > min)
            return 0;
        else if((i+A[i]) > min)
            min=A[i]+i;
    }
    if(min>=len-1)
        return 1;
    else
        return 0;
}

int Solution::canJump(vector<int> &A) {
    int ans=func(A,A.size());
    return ans;
}
