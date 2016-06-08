int Solution::firstMissingPositive(vector<int> &A) {
   
   
   int len=A.size();
   
   int pos=0;
   for(int i=0;i<len;i++)
    {
        if(A[i]>=0)
        {
            A[pos]=A[i];
            pos++;
        }
    }
    
    
    len=pos;
    for(int i=0;i<len;i++)
    {
        if(abs(A[i]) - 1 < len && A[abs(A[i]) - 1] > 0)
            A[abs(A[i]) - 1] = -A[abs(A[i]) - 1];
    }
    
    
    for(int i = 0; i < len; i++)
    if (A[i] > 0)
      return i+1;  // 1 is added becuase indexes start from 0
 
    return len+1;
    
    
}
