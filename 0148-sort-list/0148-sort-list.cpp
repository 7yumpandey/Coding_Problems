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
    
    ListNode *merge(ListNode *l,ListNode *r){
        if(l==NULL){
            return r;
        }
        if(r==NULL){
            return l;
        }
        ListNode *ans=NULL,*ansnext=NULL;
        ListNode *temp1=l,*temp2=r;
        while(temp1&&temp2){
            if(ans==NULL){
                if(temp1->val<temp2->val){
                    ans=temp1;
                    ansnext =temp1;
                    temp1=temp1->next;
                }else{
                    ans=temp2;
                    ansnext=temp2;
                    temp2=temp2->next;
                }
            }
            else{
                if(temp1->val<temp2->val){
                    ansnext->next=temp1;
                    ansnext=ansnext->next;
                    temp1=temp1->next;
                }
                else{
                    ansnext->next=temp2;
                    ansnext=ansnext->next;
                    temp2=temp2->next;
                }
            }
        }
        while(temp1){
             ansnext->next=temp1;
             ansnext=ansnext->next;
             temp1=temp1->next;
        }
        while(temp2){
             ansnext->next=temp2;
             ansnext=ansnext->next;
             temp2=temp2->next;
        }
        return ans;
    }
    ListNode *middleNode(ListNode *head){
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode *mergeSort(ListNode *head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode *middle=middleNode(head);
        ListNode *leftList=head;
        ListNode *rightList=middle->next;
        middle->next=NULL;
        leftList=mergeSort(leftList);
        rightList=mergeSort(rightList);
        
        ListNode *ans=merge(leftList,rightList);
        return ans; 
    }
    ListNode* sortList(ListNode* head) {
        // priority_queue<int, vector<int>, greater<int>>q;
        // ListNode *temp1=head;
        // while(temp1){
        //     q.push(temp1->val);
        //     temp1=temp1->next;
        // }
        // ListNode *temp2=head;
        // while(temp2){
        //     temp2->val=q.top();
        //     temp2=temp2->next;
        //     q.pop();
        // }
        // return head;
        ListNode *ans=mergeSort(head);
        return ans;
        
    }
};