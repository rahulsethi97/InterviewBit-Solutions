int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int n=A.size();
    
    int max_so_far=0,curr_max=0,max=-1*INT_MAX;
    
    int zero_is_there=0;
    for(int i=0;i<n;i++)
    {   
        if(A[i]==0)
            zero_is_there=1;
        
        if(A[i]>max)
            max=A[i];
        
        curr_max+=A[i];
        if(curr_max<0)
        {
            curr_max=0;
        }
        else if(curr_max>max_so_far)
        {
            max_so_far=curr_max;
        }
        
    }
    if(max_so_far==0 && zero_is_there==0)
    {
        
        max_so_far=max;
    }
    
    return max_so_far;
    
}
