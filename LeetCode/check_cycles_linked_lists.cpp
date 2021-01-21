
//  Definition for singly-linked list.
 struct ListNode {
    int val;
   ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
       if (head == NULL || head -> next == NULL){
           return false;
       }
        ListNode *trav1 = head -> next;
        ListNode *trav2 = head;
        
        while ( trav1 !=NULL && trav1-> next != NULL){
            if ( trav1 == trav2){
                return true;
            }
            trav2 = trav2 -> next;
            trav1 = trav1 -> next -> next;
            
        }
        return false;
    }
};
