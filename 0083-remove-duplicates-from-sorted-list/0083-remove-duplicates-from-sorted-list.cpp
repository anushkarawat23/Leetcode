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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        set<int> s;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL)
        {
            if(s.find(temp -> val) != s.end())
            {
                prev -> next = temp -> next;
                temp = temp -> next;
            }
            else
            {
                s.insert(temp -> val);
                prev = temp;
                temp = temp -> next;
            }
        }
        return head;
    }
};