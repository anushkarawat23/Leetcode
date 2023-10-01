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
 /*
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
           //n = 0         n = 1
        if( !head || (!head -> next && head -> val == val) )
            return NULL;

        while( head != NULL && head -> val == val )
            head = head -> next;

        ListNode* curr = head;
        ListNode* prev = head;
        ListNode* after;
        
        while( curr )
        {
            after = curr -> next;
            while( curr && curr -> val == val )
            {
                after = after -> next;    //wrong line
                prev -> next = after;
                curr = after;  
            }
            prev = curr;
            curr = after;
        }
        return head;
    }
};
*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Check for an empty list
        if (!head) {
            return nullptr;
        }

        // Create a dummy node to simplify the removal of the first node if needed
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr) {
            if (curr->val == val) {
                prev->next = curr->next;
                delete curr; // Free memory for the removed node
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        head = dummy->next;
        delete dummy; // Free memory for the dummy node

        return head;
    }
};
