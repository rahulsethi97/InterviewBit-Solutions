string Solution::longestPalindrome(string A) {
   
   int max_len=1,start=0;
   int l,r;
   int len=A.size();
   
   for(int i=1;i<len;i++)
   {
       l=i-1;
       r=i;
       
       
       while(l>=0 && r<len && (A[l]==A[r]))
       {
         //  cout<<"\n1";
           if((r-l+1)>max_len)
           {
               start=l;
               max_len=(r-l+1);
           }
           
           l--;
           r++;
       }
       
       
       l=i-1;
       r=i+1;
       while(l>=0 && r<len && (A[l]==A[r]))
       {
           //cout<<"\n2";
           if((r-l+1)>max_len)
           {
               start=l;
               max_len=(r-l+1);
           }
           
           l--;
           r++;
       }
   }
   
   string ret="";
   //cout<<"\n"<<start<<" "<<max_len<<"\n";
   
   while(max_len--)
   {
       //cout<<"\ncheck";
       ret+=A[start];
       start++;
   }
   return ret;
   
}
