int Solution::pow(int x, int y, int z) {
    
    long long base=x;
    long long exp=y;
    long long mod=z;
    
    if(base==0)
        return 0;
    
    if(exp==0)
        return 1;
    
    if(exp==1)
    {
        return base>=0 ? base%mod : (base+z)%mod;
    }
    
    long long int res=1;
    
    while(exp>0)
    {
       if(exp%2==1) 
        res=(res*base)%mod;
       
       base=(base*base)%mod;
       exp/=2;
    }
    return res%mod;
}
