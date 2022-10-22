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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) {
            return head;
        }
        ListNode *prev = nullptr, *curr = head, *temp = curr->next;
        while(temp) {
            if(curr->val == temp->val) {
                while(temp && temp->val == curr->val) {
                    temp = temp->next;
                }
                if(prev == nullptr) {
                    head = temp;
                }
                else {
                    prev->next = temp;
                }
            }
            else {
                prev = curr;
            }
            curr = temp;
            if(temp) {
                temp = curr->next;
            }
        }
        return head;
    }
};
