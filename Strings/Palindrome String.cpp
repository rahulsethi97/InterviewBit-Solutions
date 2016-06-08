int Solution::isPalindrome(string A) {
    vector<char> arr;
    
    for(int i=0;i<A.size();i++)
    {
        if( (A[i]>='a' && A[i]<='z') || (A[i]>='A' && A[i]<='Z') || (A[i]>='0' && A[i]<='9') )
            {
                if( (A[i]>='A' && A[i]<='Z') )
                {
                    char ch=A[i]+32;
                    arr.push_back(ch);
                }
                else
                    arr.push_back(A[i]);
            }
    }
    
    
    
    int len=arr.size();
   
    
    //for(int i=0;i<len;i++)
      //  cout<<arr[i];
    
    int l=0,r=len-1;
    
    while(l<=r)
    {
        if(arr[l]!=arr[r])
            return 0;
            
        l++;
        r--;
    }
    return 1;
}
