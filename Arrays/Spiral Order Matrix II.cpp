vector<vector<int> > Solution::generateMatrix(int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int mat[n][n];
    
    int number=n*n;
    int num=1;
    int way=1; // 1=right 2=down 3=left 4=up
    int start1=0,end1=n-1,start2=n-2,end2=0;
    int row1=0,row2=n-1,col1=0,col2=n-1;
    
    
    vector<vector<int> >res;
    
    
    while(number)
    {
        if(way==1)
        {	
        	//cout<<"From "<<start1<<" to "<<end1<<" on row "<<row1<<"\n"; 
            for(int i=start1;i<=end1;i++)
            {
                mat[row1][i]=num;
                num++;
                number--;
            }
            way=2;
            row1++;
            start1++;
        }
        if(way==2)
        {	
        	//cout<<"From "<<start1<<" to "<<end1<<" on col "<<col2<<"\n";
            for(int i=start1;i<=end1;i++)
            {
                mat[i][col2]=num;
                num++;
                number--;
            }
            way=3;
            col2--;
            end1--;
        }
        if(way==3)
        {	
        	//cout<<"From "<<start2<<" to "<<end2<<" on row "<<row2<<"\n";
            for(int i=start2;i>=end2;i--)
            {
                mat[row2][i]=num;
                num++;
                number--;
            }
            way=4;
            row2--;
            end2++;
        }
        if(way==4)
        {	
        	//cout<<"From "<<start2<<" to "<<end2<<" on col "<<col1<<"\n";
            for(int i=start2;i>=end2;i--)
            {
                mat[i][col1]=num;
                num++;
                number--;
            }
            way=1;
            col1++;
            
            start2--;
        }
    }
    
    for(int i=0;i<n;i++)
    {   
        vector<int>temp ;
        for(int j=0;j<n;j++)
        {	
        	//cout<<mat[i][j]<<" ";
        
            temp.push_back(mat[i][j]);
        }
        res.push_back(temp);
        //cout<<"\n";
    }
    return res;
    
}
