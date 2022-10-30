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

    ListNode* middle(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode *slow = head, *fast = head;

        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        } 

        return slow;
    }

    ListNode* reverse(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode *prev = nullptr, *curr = head, *frwd = nullptr;

        while(curr) {
            frwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = frwd;
        } 
        return prev;
    }

    void reorderList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) {
            return;
        }

        ListNode* mid = middle(head);
        ListNode* nhead = mid->next;
        mid->next = nullptr;

        nhead = reverse(nhead);

        ListNode *c1 = head;
        ListNode *c2 = nhead;
        ListNode *f1 = nullptr;
        ListNode *f2 = nullptr;

        while(c1 && c2) {
            f1 = c1->next;
            f2 = c2->next;   

            c1->next = c2;
            c2->next = f1;

            c1 = f1;
            c2 = f2;
        }
    }
};
