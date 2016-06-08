int Solution::strStr(const string &haystack, const string &needle) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len1=haystack.size();
    int len2=needle.size();
    
    if(len1==0 || len2==0 )
        return -1;
    if(haystack==needle)
        return 0;
        
    int i=0;

    for (int j=0; j<len1;j++) 
    {
        //cout<<haystack[j]<<" "<<needle[i]<<"\n";
        if(haystack[j]==needle[i])
        {
            
            if(i==(len2 -1))
            {
                return j-len2+1;
            }
            i++;
            continue;
        }
        else
        {
            if(i > 0)
            {
                if(len1-j>=len2)
                {
                    j=j-i;
                    i=0;
                    
                }
                else
                {
                    return -1;
                }

            }
        }

    }

    return -1;
    
    
}
