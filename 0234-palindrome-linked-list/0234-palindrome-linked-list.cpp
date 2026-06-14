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
ListNode*reverse(ListNode*slow){
    ListNode*prev=NULL;
    ListNode*nxt=NULL;
    while(slow){
        nxt=slow->next;
        slow->next=prev;
        prev=slow;
        slow=nxt;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        if(!head ||!head->next)return true;
        ListNode*temp=head;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*rev=reverse(slow);
        while(rev){
            if(temp->val!=rev->val){
                return false;
            }
            temp=temp->next;
            rev=rev->next;
        }
        return true;
    }
};