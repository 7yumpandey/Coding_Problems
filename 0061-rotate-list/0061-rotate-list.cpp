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
   
    int length(ListNode* head){
        ListNode *temp=head;
        int ans=0;
        while(temp){
            ans++;
            temp=temp->next;
        }
        return ans;
    }
    ListNode* rotateRight(ListNode* head, int k) {
       int len=length(head);
        if(k==0||len<=1||(k%len==0&&len>1)){
            return head;
        }
        k=k%len;
        ListNode *fast=head;
        ListNode *slow=head;
        while(k--&&fast->next){
            fast=fast->next;
        }
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode *ans=slow->next;
        fast->next=head;
        slow->next=NULL;
        return ans;
    }
};