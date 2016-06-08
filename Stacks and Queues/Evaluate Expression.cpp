int toInt(string s)
{
    int flag=1;
    if(s[0]=='-')
        flag=-1;
        
    int ret=0;
    
    int len=s.size();
    int mul=1;
    
    int end=1;
    if(flag==1)
        end=0;
    
    for(int i=len-1;i>=end;i--)
        {
            ret+=mul*(s[i]-'0');
            mul*=10;
        }
    return ret*flag;
}

int Solution::evalRPN(vector<string> &A) {
    int len=A.size();

    vector<int> arr;

    for(int i=0;i<len;i++)
    {
        /*cout<<"\nArray size: "<<arr.size()<<"\n";

        for(int k=0;k<arr.size();k++)
            cout<<arr[k]<<" ";
            cout<<"\n";*/

        if(A[i]=="+" || A[i]=="*" || A[i]=="-" || A[i]=="/")
        {
            int first,second;

            second=arr[arr.size()-1];
            first=arr[arr.size()-2];
            arr.pop_back();
            arr.pop_back();

            if(A[i]=="+")
                arr.push_back(first+second);
            else if(A[i]=="*")
                arr.push_back(first*second);
            else if(A[i]=="-")
                arr.push_back(first-second);
            else if(A[i]=="/")
                arr.push_back(first/second);
        }
        else
            arr.push_back(toInt(A[i]));


    }

    return arr[0];
}
