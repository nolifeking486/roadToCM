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

//brute force, implementation

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* l = NULL;
        ListNode* p = list1;
        ListNode* r = NULL;
        for(int i=0;i<=b;i++){
            if(i==a-1){
                l = p;
            }
            if(i==b){
                r= p;
            }
            p=p->next;
        }

        ListNode* q = list2;
        while(q!=NULL){
            if(q->next==NULL){
                break;
            }
            q=q->next;
        }
        q->next = r->next;
        r->next=NULL;
        l->next = list2;

        return list1;
    }
};