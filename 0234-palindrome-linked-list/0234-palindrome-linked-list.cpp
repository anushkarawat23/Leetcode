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
    bool isPalindrome(ListNode* head) 
    {
        // if no node or one node then it is palindrome
        if( !head || !head -> next )
            return true;

        //USE SLOW-FAST POINTER TO FIND THE MID OF LL
        ListNode* slow = head;
        ListNode* fast = head;
                //odd nodes                  //even nodes
        while( fast -> next != NULL && fast -> next -> next != NULL )
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode* curr = slow -> next;
        ListNode* prev = NULL;
        ListNode* after;
        // reversing the second half of the linked list
        while( curr != NULL )
        {
            after = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = after;
        }

        while( prev != NULL )     //checking till the size of second half of list
        {
            if(prev -> val != head -> val )
                return false;
            prev = prev -> next;
            head = head -> next;
        }
        return true;



    }
};