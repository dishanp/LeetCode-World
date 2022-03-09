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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return 0;
        map<int,int>u;
        ListNode* p=head;
        while(p){
            u[p->val]++;
            p=p->next;
        }
        int first=0;
        ListNode* h;
        ListNode* t;
        for(auto i:u){
            if(i.second==1){
            if(first==0){
                h=new ListNode(i.first);
                t=h;
                t->next=0;
                first++;
            }else{
                ListNode *temp =new ListNode(i.first);
                t->next=temp;
                t=temp;
                t->next=0;
            }
            }
        }
        return h;
    }
};