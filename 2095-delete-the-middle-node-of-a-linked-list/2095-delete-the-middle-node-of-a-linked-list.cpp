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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count==1){
            return head->next;
        }
        int mid=count/2+1;
        int len=1;
        ListNode *temp2=head;
        while(temp2){
            len=len+1;
            if(len==mid&&temp2->next){
                temp2->next=temp2->next->next;
                break;
            }
            temp2=temp2->next;
        }
        return head;
        
    }
};