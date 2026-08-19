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
    ListNode* removeElements(ListNode* head, int val) {
       // 1. Handle leading nodes that match 'val'
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // 2. Traverse and remove matching nodes from the rest of the list
        ListNode* temp = head;
        while (temp != nullptr && temp->next != nullptr) {
            if (temp->next->val == val) {
                ListNode* toDelete = temp->next;
                temp->next = temp->next->next; // Skip the node
                delete toDelete;
            } else {
                temp = temp->next; // Move forward
            }
        }

        return head;
    }
};