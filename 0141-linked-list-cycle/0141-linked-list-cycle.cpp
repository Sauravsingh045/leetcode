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
        unordered_map<ListNode*,bool> vis;
        if(head==NULL){
            return false;
        }
        ListNode* temp=head;
        while(head!=NULL){
            vis[head]=true;
            
            if(vis[head->next]==true)return true;
            head=head->next;
        }return false;
    }
};