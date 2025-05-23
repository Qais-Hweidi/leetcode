// 160. Intersection of Two Linked Lists
// Complexity: O(m*n) time, O(1) storage
// Notes: Brute force solution for now
// Follow up: Try other solutions with O(m+n), using 2 pointers & hash set

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
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            while(headA){
                ListNode* tempB = headB;
                while(tempB){
                    if (headA == tempB)
                        return headA;
                    tempB = tempB->next;
                }
            headA = headA->next;
            }
            return nullptr;
        }
    };