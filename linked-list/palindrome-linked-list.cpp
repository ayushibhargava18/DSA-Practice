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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* current=head;
        ListNode* prev=NULL;

        while(current!=NULL){
            temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            }
        ListNode* newhead = reverseList(slow);

        ListNode* oldtemp=head;
        ListNode* newtemp=newhead;

        while(newtemp!=NULL){
            if(newtemp->val!=oldtemp->val){
                return false;
            }
            newtemp=newtemp->next;
            oldtemp=oldtemp->next;
        }

        return true;

    }
    
};
