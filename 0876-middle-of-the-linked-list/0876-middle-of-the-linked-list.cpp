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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode*temp=head;
        
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
        
    return tem;
    }
};