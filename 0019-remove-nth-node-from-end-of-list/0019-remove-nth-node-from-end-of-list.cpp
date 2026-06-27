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
        ListNode* temp = head;
        int c = 0;

        while(temp){
            temp = temp -> next;
            c++;
        }

        if(n == c){
            head = head -> next;
            return head;
        }

        n = (c - n);
        temp = head;

        for(int i = 0;i < n - 1;i++){
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;

        return head;
    }
};