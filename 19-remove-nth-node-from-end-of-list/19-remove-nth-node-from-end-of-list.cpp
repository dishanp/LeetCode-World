/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
            return 0;
        ListNode* p=head;
        int ctr=0;
        while(p){
            ++ctr;
            p=p->next;
        }
        int k=ctr-n+1;
        p=head;
        ListNode *q=0;
        if(k==1){
            ListNode* temp=p;
             p=p->next;
            delete(temp);
            return p;
        }
        for(int i=1;i<k;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        delete(p);
        return head;
    }
};