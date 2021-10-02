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
    int length(ListNode* head){
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int l1 = length(headA);
        int l2 = length(headB);
        
        if(l1<l2){
            while(l2!=l1){
                headB= headB->next;
                l2--;
            }
        }
        if(l1>l2){
            while(l1!=l2){
                headA = headA->next;
                l1--;
            }
        }
        
        while(headA!=NULL or headB!=NULL){
            if(headA==headB) return headA;
            
            headA=headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
