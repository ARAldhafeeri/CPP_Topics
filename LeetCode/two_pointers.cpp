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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == nullptr)
            return nullptr;
        int length = 0;
        ListNode *dummy = head;
        while (dummy)
        {
            dummy = dummy->next;
            length++;
        }
        if (length == 1 && length == n)
            return nullptr;
        dummy = head;
        ListNode *temp = head;
        for (int i = 0; i < length - n; i++)
        {
            temp = temp->next;
            if (i > 0)
            {
                dummy = dummy->next;
            }
        }
        if (temp->next)
        {
            temp->val = temp->next->val;
            temp->next = temp->next->next;
        }
        else
        {
            dummy->next = nullptr;
        }
        return head;
    }
};