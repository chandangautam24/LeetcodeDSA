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
ListNode*convertinLL(vector<int>&ans){
    if(ans.empty())return NULL;
    ListNode*head=new ListNode(ans[0]);
    ListNode*temp=head;
    for(int i=1; i<ans.size(); i++){
        temp->next=new ListNode(ans[i]);
        temp=temp->next;
    }
    return head;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
       for(auto it: lists){
        while(it){
            ans.push_back(it->val);
            it=it->next;
        }
       }
        sort(ans.begin(),ans.end());
        return convertinLL(ans);
    }
};