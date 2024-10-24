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
//two pointers
//when both pointers are at zero we take the sum and put it in a new LL
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* l = head;
        ListNode* r = head->next;
        ListNode* newHead = new ListNode();
        ListNode* ans = newHead;

        int sum = 0;
        while(r!=NULL){
            if((r->val)!=0){
                sum+=r->val;
                r=r->next;
                continue;
            }
            ListNode* n = new ListNode(sum);
            newHead->next = n;
            newHead = newHead->next;

            // n->next = r;
            // l->next = n;
            l=r;
            r=r->next;
            sum=0;

        }
        return ans->next;

    }
};