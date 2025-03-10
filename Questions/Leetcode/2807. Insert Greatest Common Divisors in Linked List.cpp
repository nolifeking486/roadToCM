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

//brute force implementation
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* l = head;
        ListNode* r = head;
        while(r!=NULL){
            r=r->next;
            if(r==NULL){
                break;
            }
            ListNode* node = new ListNode(__gcd(r->val,l->val));
            l->next=node;
            node->next=r;
            l=r;
        }
        return head;

    }
};