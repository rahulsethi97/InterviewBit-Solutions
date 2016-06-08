/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    ListNode  *slow_p = A, *fast_p = A;
    int flag=0;
    while (slow_p && fast_p && fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p  = fast_p->next->next;
 
        if (slow_p == fast_p)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        ListNode *temp=slow_p;
        int k=0;
        
        do
        {
            temp=temp->next;
            k++;
        }while(temp!=slow_p);
        
        ListNode *p=A , *q=A;
        //k--;
        while(k--)
            q=q->next;
        
        while(p!=q)
        {
            p=p->next;
            q=q->next;
        }
        
        return q;
        
    }
    
    
    return NULL;
}
