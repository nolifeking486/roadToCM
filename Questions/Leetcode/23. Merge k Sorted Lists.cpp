// order of o(K*N)
//other approaches are also there but I am not sure of there time complexity
// this is just the brute force approach
//keep merging 2 lists at a time
class Solution {
public:
    ListNode* merge(ListNode* list1, vector<ListNode*>& lists, int index){
        ListNode * head = new ListNode();
        ListNode * l = head;
        ListNode * p = list1;
        ListNode * q = lists[index];
        //cout << (q->val) << endl;
        while(p!=NULL && q!=NULL){
            if((p->val)<=(q->val)){
                l->next=p;
                p=p->next;
            }
            else{
                l->next=q;
                q=q->next;
            }
            l=l->next;
        }
        while(p!=NULL){
            l->next=p;
            p=p->next;
            l=l->next;
        }
        while(q!=NULL){
            l->next=q;
            q=q->next;
            l=l->next;
        }
        return head->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return NULL;
       ListNode * ans = lists[0];
        for(int i=1;i<lists.size();i++){
            //cout << lists[i] << endl;
           ans = merge(ans,lists,i);
        }
       // cout << lists.size() << endl;
        return ans;
        
    }
};