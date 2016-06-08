int value(string x)
{
    if(x=="I") return 1;
    if(x=="IV") return 4;
    if(x=="V")  return 5;
    if(x=="IX") return 9;
    if(x=="X")	return 10;
    if(x=="XL") return 40;
    if(x=="L") return 50;
    if(x=="XC")	return 90;
    if(x=="C") return 100;
    if(x=="CD")	return 400;
    if(x=="D")	return 500;
    if(x=="CM")	return 900;
    if(x=="M")	return 1000;
}

int Solution::romanToInt(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len=A.size();
    int ans=0;
    for(int i=0;i<len;i++)
    {
        string temp="";
        if(A[i]=='I')
        {
            temp+=A[i];
            if(A[i+1]=='V' || A[i+1]=='X')
            {
                temp+=A[i+1];
                i++;
            }
            ans+=value(temp);    
        }
        else if(A[i]=='X')
        {
            temp+=A[i];
            if(A[i+1]=='L' || A[i+1]=='C')
            {
                temp+=A[i+1];
                i++;
            }
            ans+=value(temp);    
        }
        else if(A[i]=='C')
        {
            temp+=A[i];
            if(A[i+1]=='D' || A[i+1]=='M')
            {
                temp+=A[i+1];
                i++;
            }
            ans+=value(temp);    
        }
        else
        {
            temp+=A[i];
            ans+=value(temp);
        }
        
    }
    return ans;
    
}
