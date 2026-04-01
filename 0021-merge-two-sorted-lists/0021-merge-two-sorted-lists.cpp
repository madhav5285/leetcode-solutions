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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* first =list1;
        ListNode* sec =list2;
        vector<ListNode*>ans;
        while(first!=NULL && sec!=NULL){
            if(first->val<=sec->val){
                ans.push_back(first);
                first=first->next;
            }
            else{
                ans.push_back(sec);
                sec=sec->next;
            }
        }
        while(first!=NULL){
            ans.push_back(first);
            first=first->next;
        }
        while(sec!=NULL){
            ans.push_back(sec);
            sec=sec->next;
        }
        if(ans.size() == 0) return NULL;

        for(int i = 0; i < ans.size() - 1; i++){
            ans[i]->next = ans[i+1];
        }
        ans.back()->next = NULL;
    return ans[0];
        
    }
};