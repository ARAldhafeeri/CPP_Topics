/*
* Problem: 
Merge two sorted linked lists 
and return it as a new list. 
The new list should be made by 
splicing together the nodes of
 the first two lists.
 Example:
 Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4

*/

// struct ListNode {
//     int val;
//     ListNode *next;
//     create a dummy node of value 0 and pointing to nullptr
//     ListNode() : val(0), next(nullptr) {}
//     create  new node and assign x to it, pointing to null next
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // Create a dummy node
        ListNode* result = NULL;
        
        /* if one of the lists empty return the other */
        if (l1 == NULL) return(l2);
        else if (l2 == NULL) return(l1);
        
        /* Pick either a or b, and recur */
        
        if (l1 -> val <= l2 -> val) {
            result = l1;
            result-> next =  mergeTwoLists(l1->next,l2);
                
        }
        
        else {
            result = l2;
            result -> next = mergeTwoLists(l1, l2->next);
        }
        return(result);
    }
};