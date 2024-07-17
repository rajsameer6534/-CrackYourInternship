// LEETCODE 206. Reverse Linked List
// https://leetcode.com/problems/reverse-linked-list/
// Time Complexity: O(n)
// Space Complexity: O(1)



class Solution {
public:
     ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            
        }
        return prev;
    }
};