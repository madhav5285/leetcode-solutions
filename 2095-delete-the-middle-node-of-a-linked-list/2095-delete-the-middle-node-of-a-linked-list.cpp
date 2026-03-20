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
        int cnt=0;
        ListNode*temp=head;
        if(head->next==NULL){
            
            return NULL;
        }
        if(head->next->next==NULL){
            head->next=NULL;
            return head;
        }
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        ListNode* tem=head;
        int n=0,a=0;
        if(cnt%2!=0){
            n=cnt/2;
            while(a!=n){
                a++;
                tem=tem->next;              
            }       
        }
        else{
            n=cnt/2;
            while(a!=n){
                a++;
                tem=tem->next;
            }      
        }  
        ListNode*prev=head;
        while(prev->next!=tem){
            prev=prev->next;
        }
        prev->next=tem->next;
        tem->next=nullptr;
        delete(tem);

    return head;
        
    }
};