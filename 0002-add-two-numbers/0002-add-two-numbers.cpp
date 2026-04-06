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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummyNode=new ListNode(-1);
        ListNode*curr=dummyNode;
        ListNode* a=l1;
        ListNode* b=l2;
        int carry=0;
        while(a!=NULL || b!=NULL){
            int sum=carry;
            if(a) sum+=a->val;
            if(b) sum+=b->val;
            ListNode* temp=new ListNode(sum%10);
            carry=sum/10;
            curr->next=temp;
            curr=curr->next;
            if(a) a=a->next;
            if(b) b=b->next;
        }
        if(carry){
            ListNode* temp=new ListNode(carry);
            curr->next=temp;
        }
    return dummyNode->next;
        
    }
};