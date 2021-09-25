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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int len=1;
        while(temp->next!=NULL) {
            len = len+1;
            temp=temp->next;
        }
        if(len==1) return NULL;
        ListNode *tempnew=head;
        int k=0;
        if(len-n==0){
            head=head->next;
        }
        else
        while(k<len-n-1){
            tempnew=tempnew->next;
            k++;
        }
        ListNode* nthadd = tempnew->next->next;
        tempnew->next = nthadd;
        return head;
    }
};
