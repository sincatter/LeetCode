/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var mergeTwoLists = function(l1, l2) {
    
    var li1=l1;
    var li2=l2;
    var res=new ListNode(0);
    var tmp=res;
    while(li1!=null&&li2!=null){
        if(li1.val<li2.val){
            tmp.next=li1;
            li1=li1.next;
            tmp=tmp.next;
        }else{
            tmp.next=li2;
            li2=li2.next;
            tmp=tmp.next;
        }
    }
    if(li1!=null)tmp.next=li1;
    if(li2!=null)tmp.next=li2;
    return res.next;
};