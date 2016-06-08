string Solution::simplifyPath(string path) {
    vector<string> arr;
    int len1=path.size();

    if(len1==1)
        return "/";

    int j=1,end;
    string sub="";
    while(j<len1)
    {
        sub="/";
        end=j;
        while(end<len1 && path[end]!='/')
           {

                sub+=path[end];
                end++;
           }
        if(sub!="/." && sub!="/")
            arr.push_back(sub);
        j=end+1;
    }
    string res="";

    int start=0;
    int len=arr.size();
    int act[len];
    for(int i=0;i<len;i++)
        act[i]=1;
    for(int i=0;i<arr.size();i++)
       {
           if(arr[i]=="/..")
           {
               act[i]=0;
               int j=i-1;
               while(act[j]==0 && j>=0)
                j--;
               if(j>=0)
                act[j]=0;
           }
       }
    //cout<<len;
    for(int i=0;i<len;i++)
    {
        //cout<<act[i];
        if(act[i])
            res+=arr[i];
    }
    if(res.size()==0)
        return "/";
    return res;
    
    
}
