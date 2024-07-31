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
    ListNode* sortList(ListNode* head) {
        priority_queue<int, vector<int>, greater<int>>q;
        ListNode *temp1=head;
        while(temp1){
            q.push(temp1->val);
            temp1=temp1->next;
        }
        ListNode *temp2=head;
        while(temp2){
            temp2->val=q.top();
            temp2=temp2->next;
            q.pop();
        }
        return head;
        
    }
};