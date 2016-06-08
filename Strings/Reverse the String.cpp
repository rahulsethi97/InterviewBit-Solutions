void Solution::reverseWords(string &A) {
   
    
    vector<string> arr;
    
    int len=A.size();
    if(len!=1)
    {
    string temp="";
    
    for(int i=0;i<len;i++)
    {
        
        
        if(A[i]==' ')
        {
            if(temp!="")
             arr.push_back(temp);
            temp="";
        }
        else
           temp+=A[i];
    }
    if(temp!="")
             arr.push_back(temp);
    
    A="";
    
    len=arr.size();
    for(int i=len-1;i>=0;i--)
       { A+=arr[i];
         if(i)
            A+=" ";
       }
    }
}
