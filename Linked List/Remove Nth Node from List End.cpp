/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
   
   
   ListNode *first=A;
   ListNode *second=A;
   
   
   int ctr=0;
   
   while((first->next)!=NULL)
   {
      if(ctr>=B)
      {
          second=second->next;
      }
      first=first->next;
      ctr++;
   }
   
   if(second==A)
        A=A->next;
   else
       second->next=second->next->next;
   
   return A;
   
}
