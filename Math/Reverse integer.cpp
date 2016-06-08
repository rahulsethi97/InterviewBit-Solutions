int Solution::reverse(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    long long size=0,temp=abs(A);
    
    while(temp>0)
    {
        temp=temp/10;
        size++;
    }
    
    long long init_power=pow(10,size-1);
    
    int limit=pow(2,31)-1;
    
    int ans=0;
    
    temp=abs(A);
    //cout<<"\n"<<temp<<" "<<size<<"\n";
    
    while(temp>0)
    {
        long long z=temp%10;
        //cout<<"\n"<<init_power<<" "<<z<<" ";
        long long p=init_power*z;
        
        
        if(p>limit || ans+p>limit)
         return 0;
        
        
        //cout<<" "<<p<<" ";
        
        
        ans=ans+p;
        //cout<<ans;
        temp=temp/10;
        init_power/=10;
    }
    
      
    //cout<<"\n"<<ans<<"\n";
    
    if( (A>=0))
        return ans;
    else if((A<0))
        return -1*ans;
    else
        return 0;
    
    
}

