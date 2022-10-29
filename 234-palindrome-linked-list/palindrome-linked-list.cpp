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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head, *prev = nullptr, *temp;

        while(fast && fast->next) {
            fast = fast->next->next;
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        if(fast) {
            slow = slow->next;
        }
        while(slow) {
            if(slow->val != prev->val) {
                return false;
            }
            else {
                slow = slow->next;
                prev = prev->next;
            }
        }
    return true;



        // stack<int> st;
        // ListNode* temp = head;
        
        // while(temp != NULL) {
        //     st.push(temp->val);
        //     temp = temp->next;
        // }
        
        
        // while(head != NULL) {
        //     if(st.top() != head->val) {
        //         return false;
        //     }
        //     st.pop();
        //     head = head->next;
        // }
        
        // return true;
    }
};
