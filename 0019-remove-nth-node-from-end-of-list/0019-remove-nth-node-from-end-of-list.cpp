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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if( !head || !head -> next || n <= 0 )
            return NULL;
        int count = 0;
        ListNode* curr = head;
        while( curr )
        {
            count++;             //5
            curr = curr -> next; 
        }
        curr = head;
        ListNode* prev = new ListNode(0);
        if( count == n )
        {
            head = head -> next;
            return head;
        }
        while( curr )
        {
            if( count == n )
            {
                prev -> next = curr -> next;
                delete(curr);
                break;
            }
            else
            {
                prev = curr;
                curr = curr -> next;
            }
            count--;
        }
        return head;

    }
};