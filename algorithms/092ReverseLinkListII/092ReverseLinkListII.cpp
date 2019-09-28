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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *mNode = nullptr;
        ListNode *headNode = nullptr;
        ListNode *endNode = nullptr;
        ListNode *nowNode = head;
        for(int i=1;i<=n;i++){
            if(i<m){
                mNode=nowNode;
            }
            if(i==m){
                headNode = nowNode;
                endNode = nowNode;
            }
            if(i>m&&i<=n){
                ListNode *ttNode =nowNode->next;
                nowNode->next = headNode;
                headNode = nowNode;
                endNode->next = ttNode;
                nowNode=endNode;
            }
            nowNode=nowNode->next;
        }
        if(mNode==nullptr){
            return headNode;
        }else{
            mNode->next=headNode;
            return head;
        }
    }
};