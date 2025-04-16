// 876. Middle of the Linked List
// Conplexity: O(n) time to iterate through the list, O(1) storage
// Notes:
// Follow up:

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
        ListNode* middleNode(ListNode* head) {
            ListNode* slowPointer = head;
            ListNode* fastPointer = head;
            while(fastPointer != NULL && fastPointer->next != NULL){
                slowPointer = slowPointer->next;
                fastPointer = fastPointer->next->next;
            }
            return slowPointer;
        }
    };