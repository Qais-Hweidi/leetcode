// 206. Reverse Linked List
// Complexity: iterative solution, O(n) time to iterate through the list, O(1) storage
// Notes: we can ommit cur and just use head instead
// Follow up: Do it recursively

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
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL; // track the previous node
            ListNode* cur = head;
    
            while (cur != NULL){
                ListNode* next = cur->next; // to keep a pointer to the original list
                cur->next = prev; // reverse the pointer
                prev = cur;
                cur = next;
            }
            return prev;
        }
    };