unsigned long long int toNumber(string x)
{
    unsigned long long int ans=0;
    unsigned long long int mul=1;
    unsigned long long int len=x.size();
    
    for(int i=len-1;i>=0;i--)
    {
        ans += (x[i]-'0')*mul;
        mul*=10;
    }
    
    return ans;
}

int Solution::compareVersion(string A, string B) 
{
    
    int first,second;
    string f="",s="";
    int len1=A.size();
    int len2=B.size();
    
    int i=0,j=0;
    
    while(i<len1 || j<len2)
    {
        if(i<len1 && A[i]!='.')
        {
         f+=A[i];
         i++;
        }
        
        
        if(j<len2 && B[j]!='.')
        {
         s+=B[j];
         j++;
        }
        
        //cout<<f<<" "<<s<<"\n";
        if((A[i]=='.' && B[j]=='.') || (A[i]=='.' && j==len2) || (i==len1 && B[j]=='.'))
        {
            //cout<<toNumber(f)<<" "<<toNumber(s);
            if(toNumber(f)>toNumber(s))
                return 1;
            else if(toNumber(f)<toNumber(s))
                return -1;
            
            
            i++;
            j++;
            f="";
            s="";
        }
        
    }
    if(f!="" && s!="")
    {
            //cout<<toNumber(f)<<" "<<toNumber(s);
            if(toNumber(f)>toNumber(s))
                return 1;
            else if(toNumber(f)<toNumber(s))
                return -1;
            else
                return 0;
    }
    
    
    if(f!="" && s=="")
        {
            if(toNumber(f)!=0)
                return 1;
            
        }
    if(f=="" && s!="")
       { 
           if(toNumber(s)!=0)
                return -1;
           
       }
       
        
    return 0;
}
