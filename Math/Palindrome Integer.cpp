bool Solution::isPalindrome(int A) {
    string str="";
    
    if(A<0)
       return 0;
    int temp=A;
    char ch;
    while(temp>0)
    {
        int temp1=temp%10;
        ch='0'+temp1;
        str=str + ch;
        temp=temp/10;
    }
    
    int l=0;
    int r=str.size()-1;
    
    while(l<=r)
    {
        if(str[l]!=str[r])
        {
            return false;
        }
        l++;
        r--;
    }
    
    return true;
    
    
}
