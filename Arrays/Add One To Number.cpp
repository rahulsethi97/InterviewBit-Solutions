vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<int> a;
    
    int len=A.size();
    int p=0;
    
    while(A[p]==0 & p<len-1)
        p++;
    
    for(int i=p;i<len;i++)
        a.push_back(A[i]);
        
        
    len=a.size();
    
    
    
    
    if(a[len-1]<9)
    {
        a[len-1]++;
        return a;
    }
    else
    {   
        a[len-1]=0;
        int flag=1,pos=len-2;
        while(flag && pos>=0)
        {
            if(a[pos]<9)
            {
                a[pos]++;
                flag=0;
                pos--;
            }
            else
            {
                a[pos]=0;
                flag=1;
                pos--;
            }
        }
        
        if(flag==1)
        {
            vector<int> B;
            B.push_back(1);
            
            for(int i=0;i<len;i++)
                B.push_back(a[i]);
                
            return B;
        }
        else
        {
            return a;
        }
    }
    
    
}

