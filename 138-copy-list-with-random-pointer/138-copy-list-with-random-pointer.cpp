/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return 0;
        unordered_map<Node*,Node*>u;
        Node *p=head;
        while(p){
            u[p]=new Node(p->val);
            p=p->next;
        }
        p=head;
        while(p){
            u[p]->next=u[p->next];
            u[p]->random=u[p->random];
            p=p->next;
        }
        return u[head];
    }
};

