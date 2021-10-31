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
        

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL or k==0) return head;
        ListNode* last = head;
        int len = 1;
        while(last->next!=NULL and ++len) last = last->next;
        last->next = head;
        k = k%len;
        k = len-k;                
     
        while(k--)
            last = last->next;
        
        head = last->next;            //go to len-k index and change the head
        last->next = NULL;
        return head;
    }
};
