/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    int ctr=0;

    ListNode *temp=A;
    ListNode *p1=NULL;
    ListNode *p2=NULL;
    ListNode *p3=NULL;
    ListNode *p4=NULL;
    ListNode *prev=NULL;
    ListNode *curr=NULL;


    while(temp!=NULL)
    {
        ctr++;

        if(ctr==(n-1))
            p1=temp;
        else if(ctr==n)
        {
            p2=temp;
            while(ctr<=m)
            {
            curr=temp;
            temp=temp->next;
            curr->next=prev;
            prev=curr;
            ctr++;
            }
            p3=curr;
            p4=temp;
        }

        if(temp)
          temp=temp->next;


    }


    p2->next=p4;
    if(p1)
      p1->next=p3;
    else
      return p3;

    return A;
}
