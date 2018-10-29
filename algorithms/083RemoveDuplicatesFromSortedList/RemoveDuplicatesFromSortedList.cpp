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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode* get_max_node=head;
        ListNode* now_node=head->next;
        while(now_node!=NULL){
            if(now_node->val!=get_max_node->val){
                get_max_node=get_max_node->next;
                get_max_node->val=now_node->val;
            }
            now_node=now_node->next;
        }
        get_max_node->next=NULL;
        return head;
    }
};