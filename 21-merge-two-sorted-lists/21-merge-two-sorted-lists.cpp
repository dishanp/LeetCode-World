class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1&&!l2)
            return 0;
        if(!l1&&l2)
            return l2;
        if(!l2&&l1)
            return l1;
        ListNode* head=0;
        ListNode* tail=0;
        if(l1->val<l2->val){
            head=new ListNode(l1->val);
            l1=l1->next;
            tail=head;
            tail->next=0;
        }
        else {
            head=new ListNode(l2->val);
            l2=l2->next;
            tail=head;
            tail->next=0;
        }
        while(l1&&l2){
            if(l1->val<l2->val){
            tail->next=l1;
            tail=l1;
            l1=l1->next;
            tail->next=0;
            }else{
            tail->next=l2;
            tail=l2;
            l2=l2->next;
            tail->next=0;
            }
        }
        if(l1)
            tail->next=l1;
        if(l2)
            tail->next=l2;
        return head;
    }
};