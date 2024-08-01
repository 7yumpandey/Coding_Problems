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
        int count=0;
        while(head){
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        if(length(head)<k){
            return head;
        }
        ListNode *curr=head;
        ListNode* prev=NULL,*next=NULL;
        int count=k;
        while(curr&&count){
            next=curr->next;
            curr->next=prev;
            prev= curr;
            curr=next;
            count--;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
    }
};