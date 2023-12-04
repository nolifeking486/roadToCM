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
//easy question
// only tricky part is optimization
// logic remains the same
// return max of the sum of twin nodes
// 3 approaches:
// brute force: put all the nodes in a vector and proceed
// reverse: half of the linked list
// I have implemented approach analogous to recursive reverse by using stack
// so memory is being used for stack
// below code can be optimized using iterative reverse
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL){
            if(slow->next !=NULL){
                slow=slow->next;
            }
            if(fast->next!=NULL){
                fast=fast->next;
            }
            fast=fast->next;

        }
        stack<int>q;
        while(slow!=NULL){
            q.push(slow->val);
            slow=slow->next;
        }
        int ans=0;
        ListNode* a = head;
        while(!q.empty()){
            int cur = q.top();
            q.pop();
            ans = max(ans, cur+ a->val);
            a=a->next;
        }
        return ans;

    }
};