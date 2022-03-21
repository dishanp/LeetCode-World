class Solution {
public:
    ListNode* reverseList(ListNode* p) {
         ListNode* r=0;
         ListNode* q=0;
         while(p){
             r=q;
             q=p;
             p=p->next;
             q->next=r;
         }
        return q;
    }
};