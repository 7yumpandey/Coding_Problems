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
    ListNode*reverse(ListNode * head){
        ListNode * prev=NULL,*curr=head,*next=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n<=0){
            return head;
        }
        head=reverse(head);
        int len=1;
        ListNode *temp=head;
        if(n==1){
            ListNode *rev=reverse(head->next);
            return rev;
        }
        while(temp){
            len++;
            if(len==n &&temp->next){
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
        return reverse(head);
        
    }
};