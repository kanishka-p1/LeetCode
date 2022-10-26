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

    int length(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp) {
            temp = temp -> next;
            count++;
        }
        return count;
    }

    ListNode* helper(ListNode* head, int k, int l) {
        if(l < k) {
            return head;
        }
        int count = 0;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* frwd = nullptr;

        while(count < k && curr) {
            frwd = curr->next;
            curr->next = prev;

            prev = curr;
            curr = frwd;
            count++;
        }

        if(frwd) {
            head->next = helper(frwd, k, l-k);
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int l = length(head);
        return helper(head, k, l);
    }
};
