class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next||k==0)
            return head;
        
        ListNode* p=head;
        int len=1;
        while(p->next){
            p=p->next;
            ++len;
        }
        
        p->next=head;
        k=k%len;
        for(int i=0;i<len-k;i++){
            p=p->next;
        }
        head=p->next;
        p->next=0;
        return head;
    }
};