/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // unordered_map<ListNode *,int>mp;
         if(head==NULL ||head->next==NULL) return false;
        // ListNode *temp=head;
        // while(temp!=NULL){
        //     mp[temp]++;
        //     if(mp[temp]>=2){
        //         return true;
        //     }
        //     temp=temp->next;
        // }
        //by slow and fast pointer
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }

        
    return false;
    }
};