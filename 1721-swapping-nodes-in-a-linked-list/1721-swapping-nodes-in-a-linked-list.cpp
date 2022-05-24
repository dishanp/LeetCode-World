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
    int len(ListNode* l){
        int ctr=0;
        while(l){
            ++ctr;
            l=l->next;
        }
        return ctr;
    }
    ListNode* util(ListNode* head,int k){
        ListNode* end=head;
        int x=len(head)-k;
        for(int i=0;i<x;i++){
            end=end->next;
        }
        return end;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(k>len(head))
            return 0;
        ListNode* beg=head;
        for(int i=0;i<k-1;i++){
            beg=beg->next;
        }
        ListNode* end=util(head,k);
        cout<<end->val<<beg->val;
        swap(end->val,beg->val);
        return head;
    }
};