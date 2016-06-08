int Solution::diffPossible(vector<int> &arr, int diff) {
   
   
   int len=arr.size();
   if(len<=1)
    return 0;
   
   int num;
  int j = 0; 
for (int i = 0; i < len; i++) 
{
  j = max(j, i+1);
  while (arr[j] - arr[i] < diff) 
    j += 1;
  if (arr[j] - arr[i] == diff)
    return 1;
  
    
}
   return 0;
}
