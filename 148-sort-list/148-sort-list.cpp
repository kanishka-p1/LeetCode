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
    
    ListNode* midp_ll(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    
    ListNode* mergetll(ListNode* head1, ListNode* head2){
        if(head1 == NULL){
            return head2;
        }
        if(head2 == NULL){
            return head1;
        }
        
        if(head1 -> val < head2 -> val){
            head1 -> next = mergetll(head1 -> next, head2);
            return head1;
        }
        else{
            head2 -> next = mergetll(head1, head2 -> next);
            return head2;
        }
    }
    
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* mid = midp_ll(head);
        ListNode* midf = mid -> next;
        mid -> next = NULL;
        ListNode* start = sortList(head);
        ListNode* center = sortList(midf);
        ListNode* nhead = mergetll(start, center);
        return nhead;
    }
};