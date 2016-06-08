int Solution::numSetBits(unsigned int A) {
    
    
    int ans=0;
    int temp;
    for(int i=0;i<32;i++)
    {
        temp = A & 1;
        
        if(temp!=0)
            ans++;
        
        A>>=1;
    }
    return ans;
}
