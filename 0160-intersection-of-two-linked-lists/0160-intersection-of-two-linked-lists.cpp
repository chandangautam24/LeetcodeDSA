/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)return NULL;
        ListNode*n1=headA;
        ListNode*n2=headB;
        while(n1!=n2){
            n1=n1?n1=n1->next:headA;
            n2=n2?n2=n2->next:headB;
        }
        return n1;
    }
};