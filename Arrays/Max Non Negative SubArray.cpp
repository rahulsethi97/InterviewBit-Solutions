vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int len=A.size();
    
    int s=-1,e=-1;
    long long int max=-1,j;
    for(int i=0;i<len;i++)
    {   
        if(A[i]>=0)
        {
        long long int sum=A[i];
        for(j=i+1;j<len;j++)
        {   
            if(sum==max)
            {
             if((j-i)>(e-s))
             {
             max=sum;
             s=i;
             e=j;
             }
            }
            if(sum>max)
            {
             max=sum;
             s=i;
             e=j;
            }
            
            if(A[j]<0)
              break;
            
            
            sum=sum+A[j];
        }
        if(sum>max)
            {
            max=sum;
            s=i;
            e=j;
            }
        }
    }
    
    vector<int>B;
    if(s!=-1)
    {
    for(int i=s;i<e;i++)
    {
        B.push_back(A[i]);
    }
    }
    return B;
}
