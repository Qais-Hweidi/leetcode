// 141. Linked List Cycle
// Conplexity: O(n) time to iterate through the list, O(1) storage
// Notes:
// Follow up: There is another possible solution

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode* slowPointer = head;
            ListNode* fastPointer = head;
    
            while(fastPointer != NULL && fastPointer->next != NULL){
                slowPointer = slowPointer->next;
                fastPointer = fastPointer->next->next;
    
                if(fastPointer == slowPointer)
                    return true;
            }
            return false;
        }
    };