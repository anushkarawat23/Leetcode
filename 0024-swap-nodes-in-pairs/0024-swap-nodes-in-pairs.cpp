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
    ListNode* swapPairs(ListNode* head) 
    {
        /*  TC = 0(N)  SC = O(1)
        if(!head || !head -> next)
            return head;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* after;

        while(curr && curr -> next)
        {
            after = curr -> next;
            curr -> next = after -> next;
            after -> next = curr;
            if(prev)
                prev -> next = after;
            else
                head = after;
            prev = curr;
            curr = curr -> next;       
        }
        return head;


        */
        //RECURSION

        if(!head || !head -> next)
            return head;
        
        ListNode* temp = head -> next;

        head -> next = swapPairs(head -> next -> next);
        temp -> next = head;

        return temp;
        
    }
};