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
ListNode*findtail(ListNode*head){
    ListNode*tail=head;
    while(tail->next){
        tail=tail->next;
    }
    return tail;
}
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)return head;
        ListNode*tail=findtail(head);
        ListNode*curr=head;
        int len=0;
        while(curr){
            len++;
            curr= curr->next;
        }
        if(k%len==0)return head;
        if(k>len)k=k%len;
        tail->next=head;
        curr=head;
        for(int i=0; i<len-k-1; i++){ // -1 because 0 indexed
          curr=curr->next;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};