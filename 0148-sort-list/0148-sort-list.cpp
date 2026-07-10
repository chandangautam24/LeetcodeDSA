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
ListNode*findmid(ListNode*head){
    ListNode*slow=head;
    ListNode*fast=head->next;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
ListNode*merge(ListNode*l1,ListNode*l2){
    ListNode temp(0);
    ListNode*curr=&temp;
    while(l1 && l2){
        if(l1->val<l2->val){
            curr->next=l1;
            l1=l1->next;
        }
        else{
            curr->next=l2;
            l2=l2->next;
        }
        curr=curr->next;
    }
    if(l1){
        curr->next=l1;
    }
    if(l2){
        curr->next=l2;
    }
    return temp.next;
}
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode*mid=findmid(head);
        ListNode*righthead=sortList(mid->next);
        mid->next=NULL;
        ListNode*left=sortList(head);
        ListNode*right=righthead;
        return merge(left, right);
    }
};