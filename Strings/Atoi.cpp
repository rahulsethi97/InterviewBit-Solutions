unsigned long long toNumber(string x,int s,int e)
{
    int len=e;
    unsigned long long ans=0;
    unsigned long long mul=1;
    
    
    for(int i=len-1;i>=s;i--)
    {
        ans += (x[i]-'0') * mul;
        mul=mul*10;
    }
    return ans;
}



int Solution::atoi(const string &A) {
    
    int len=A.size();
    int i=0;
    
    
    while(A[i]==' ' && i<len)
        i++;
        
    if(i==len)
        return 0;
       
    //cout<<i<<"\n";   
    int flag=0;
    
    if(A[i]=='-')
        {
            i++;
            flag=1;
        }
        
    if(A[i]=='+')
    {
        i++;
        flag=0;
    }
    
    if(A[i]<'0' || A[i]>'9')
        return 0;
    
    //string temp="";
    
    int start=i;
    int end=i;
    while(A[end]>='0' && A[end]<='9')
        end++;
    
    
    //cout<<temp<<"\n";    
    
    
    unsigned long long ans;
    ans=toNumber(A,start,end);
    
    if(ans>INT_MAX)
    {
        if(flag)
            return INT_MIN;
        else
            return INT_MAX;
    }
    
    
    
    if(flag)
        return -1*ans;
    else
        return ans;
    
}
