string Solution::countAndSay(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int n=A,len;
    
    string s="1";
    //cout<<s<<" 1\n";
    string new_="";
    n--;
    while(n--)
    {
        len=s.size();
        new_="";
        int i=0,j=0;
        while(i<len && j<len)
        {
            char c=s[i];
            j=i+1;
            int ctr=1;
            while(s[j]==c)
                {
                    j++;
                    ctr++;
                }
            // cout<<c<<" ";
            // cout<<ctr<<"\n";
            new_+=to_string(ctr);
            new_+=c;
            
            
            i=j;
        }
        s=new_;
        //cout<<s<<" "<<s.size()<<"\n";
    }
    return s;
}
