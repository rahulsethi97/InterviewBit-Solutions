int Solution::maxArea(vector<int> &A) {
    int start =0;  
    int end = A.size()-1;  
    int maxV = 0;  
    while(start<end)  
    {  
     int contain = min(A[end], A[start]) * (end-start);  
       maxV = max(maxV, contain);  
        if(A[start]<=A[end])  
        {  
          start++;  
        }  
        else  
        {  
          end--;  
        }  
      }  
      return maxV;  
}
