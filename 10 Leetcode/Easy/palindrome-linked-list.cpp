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
    bool isPalindrome(ListNode* head) {
       if(head==NULL) return true;
        if(head->next==NULL) return true;
        
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast!=NULL and fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* aftermid = slow->next;
        slow->next = NULL;
        
        ListNode* prev = NULL, *curr = aftermid, *temp;
        
        while(curr!=NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        ListNode *first = head;
        
        aftermid = prev;
        
        while(aftermid!=NULL){
            if(first->val!=aftermid->val) return false;
            first = first->next;
            aftermid = aftermid->next;
        }
       return true;
    }
};
