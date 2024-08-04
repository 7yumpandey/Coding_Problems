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
    int length(ListNode*head){
        ListNode* curr=head;
       int count=0;
        while(head){
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        int len=length(head);
        if(len<k){
            return head;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        int count=k;
        while(curr&&count--){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
    }
};