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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head || !head->next||!head->next->next){
            return {-1,-1};
        }
        int mndis=INT_MAX; int maxima=0; int firstCP=-1;
        int mxdis=INT_MIN;int minima=0;int len=1; int lastCP=-1;
        ListNode*prev=head;
        ListNode*nxt=head->next->next;
        ListNode*curr=head->next;
        while(nxt){
            if((curr->val<prev->val && curr->val<nxt->val) || 
            (curr->val>prev->val && curr->val>nxt->val)){
                if(firstCP==-1){
                    firstCP=len;
                }
                else{
                  mndis=min(mndis,len-lastCP);
                  mxdis=max(mxdis,len-firstCP);
                }
                lastCP=len;
            }
            len++;
            nxt=nxt->next;
            curr=curr->next;
            prev=prev->next;
        }
        if(firstCP==lastCP){
            return {-1,-1};
        }
        return {mndis,mxdis};
    }
};