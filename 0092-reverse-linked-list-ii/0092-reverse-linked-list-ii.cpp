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

    ListNode* converts(vector<int> arr){
        ListNode* head = new ListNode(arr[0]);
        ListNode* temp = head;

        for(int i = 1;i < arr.size();i++){
            ListNode* temp1 = new ListNode(arr[i]);
            temp -> next= temp1;
            temp = temp1;
        }

        return head;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head){
            return head;
        }

        vector<int> arr;
        ListNode* temp = head;

        while(temp){
            arr.push_back(temp -> val);
            temp = temp -> next;
        }

        vector<int> arr1;
        for(int i = left - 1 ;i < right;i++){
            arr1.push_back(arr[i]);
        }

        reverse(arr1.begin(),arr1.end());

        for(int i = 0;i < arr1.size();i++){
            arr[left - 1] = arr1[i];
            left++; 
        }

        head = converts(arr);
        return head;
    }
};