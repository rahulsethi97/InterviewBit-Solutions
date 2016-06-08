void Solution::merge(vector<int> &A, vector<int> &B) {
    
    vector<int> b;
	int len1=A.size();
	int len2=B.size();
	int pos=0;
	for(int i=0;i<len1;i++)
	{
		int ele=A[i];

		while(B[pos]<ele && pos<len2)
		{
			b.push_back(B[pos]);
			pos++;
		}
		b.push_back(ele);
	}	

	if(pos<=len2)
	{
		while(pos<len2)
		{
			b.push_back(B[pos]);
			pos++;
		}
	}
	pos=0;

	int size_=b.size();;
	A.resize(size_);
	
	for(int i=0;i<size_;i++)
	    A[i]=b[i];
    
}
