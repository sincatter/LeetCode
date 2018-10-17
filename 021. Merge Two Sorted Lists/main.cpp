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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res=new ListNode(0);
        ListNode* tmp=res;
        ListNode* li1=l1;
        ListNode* li2=l2;
        while(li1!=NULL&&li2!=NULL){
            if(li1->val<li2->val){
                tmp->next=li1;
                li1=li1->next;
            }else{
                tmp->next=li2;
                li2=li2->next;
            }
            tmp=tmp->next;
        }
        if(li1!=NULL)tmp->next=li1;
        if(li2!=NULL)tmp->next=li2;
        return res->next;
    }
};