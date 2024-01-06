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
// people haved solved using count and 2 loops
// i have implemented using 1 loop slow fast and lag ptr
// use slow fast to calculate middle node
// then delete slow
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next)return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* lag = NULL;

        while(fast!=NULL){
            lag = slow;
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;
            if(fast==NULL || fast->next==NULL)break;
        }
       // cout << lag->val << " " << slow->val << endl;
        lag->next=slow->next;
        //slow->next=NULL;
        return head;

    }
};