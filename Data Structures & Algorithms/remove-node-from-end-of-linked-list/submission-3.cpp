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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* curr = head;
        while(curr != NULL){
            count++;
            curr = curr->next;
        }
        if(count == n) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        curr = head;
        int pos = count - n;
        for(int i=1; i<pos; i++){
            curr = curr->next;
        }

        ListNode* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return head;
    }
};
