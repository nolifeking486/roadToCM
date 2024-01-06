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

// collect all odd nodes together and even nodes together
// maintain links properly
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next)return head;

        ListNode* p = head;
        ListNode* q = head->next;
        ListNode* even = q;
        while(q->next != NULL){
            p->next=q->next;
            p=p->next;
            if(p->next==NULL){
                //p->next=q;
                q->next=NULL;
                break;
            }
            q->next=p->next;
            q=q->next;
        }
        p->next=even;
        return head;

    }
};