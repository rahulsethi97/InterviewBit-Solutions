vector<int> Solution::grayCode(int A) {
    int ans;
    vector<int> ret;
	for (int i=0; i <= (1<<A)-1; i++)
	{
	    ans = (i >> 1) ^ i;
	    ret.push_back(ans);
	}
	return ret;
   
}
