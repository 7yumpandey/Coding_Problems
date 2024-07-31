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
    ListNode * reverse(ListNode *head){
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *next=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* swapNodes(ListNode* head, int k) {

        int list1=-1;
        int list2=-1;
        ListNode *temp1=head;
        int len=0;
        while(temp1){
            len++;
            
            if(len==k){
                list1=temp1->val;
            }
            temp1=temp1->next;
        }
        head=reverse(head);
         ListNode *temp2=head;
        int len1=0;
        while(temp2){
            len1++;
            if(len1==k){
                list2=temp2->val;
                temp2->val=list1;
            }
            temp2=temp2->next;
        }
         head=reverse(head);
         ListNode *temp3=head;
        int len3=0;
        while(temp3){
            len3++;
            if(len3==k){
                temp3->val=list2;
            }
            temp3=temp3->next;
        }
        return head;
        
    }
};