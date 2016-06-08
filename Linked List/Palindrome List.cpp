/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
#define mylist ListNode

mylist * create_node()
{
 mylist *ret;
 ret=(mylist *)malloc(sizeof(mylist));
 return ret;
}

mylist * reverse_linked_list(mylist *A)
{
    mylist * rev=create_node();
    rev->val=A->val;
    rev->next=NULL;
    A=A->next;
    while(A!=NULL)
    {
        mylist * new_node=create_node();
        new_node->val=A->val;
        new_node->next=rev;
        rev=new_node;
        A=A->next;
    }

    return rev;

}

int compare_list(mylist *A,mylist *B)
{
    while(A!=NULL)
    {
        if(A->val!=B->val)
            return 0;

        A=A->next;
        B=B->next;
    }
    return 1;
}

int Solution::lPalin(ListNode* A) {
    
    mylist *rev_list=reverse_linked_list(A);
    
    if(compare_list(A,rev_list))
        return 1;
    else
        return 0;
    
    
}
