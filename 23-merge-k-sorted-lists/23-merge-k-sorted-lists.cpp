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
    ListNode*  merge(ListNode* l1,ListNode* l2){
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        if(l1->val<l2->val)
        {
            l1->next=merge(l1->next,l2);
            return l1;
        }
        l2->next=merge(l1,l2->next);
        return l2;
    }
    ListNode* util(vector<ListNode* >lists,int lo,int hi){
        if(lo==hi)
            return lists[lo];
        if(lo<=hi){
            int mid=lo+(hi-lo)/2;
            ListNode* l1=util(lists,lo,mid);
            ListNode* l2=util(lists,mid+1,hi);
            return merge(l1,l2);
        }
        return 0;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return util(lists,0,lists.size()-1);
    }
};