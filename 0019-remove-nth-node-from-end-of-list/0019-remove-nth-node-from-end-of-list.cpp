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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        if(head==NULL) return NULL;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(n==cnt) return head->next; 
        cnt=cnt-n-1; 
        temp=head;
        int a=0;
        while(a!=cnt){
            a++;
            temp=temp->next;
        } 
        temp->next = temp->next->next;    
    return head;
        
    }
};