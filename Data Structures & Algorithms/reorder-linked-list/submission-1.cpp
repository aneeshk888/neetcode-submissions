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
    void reorderList(ListNode* head) {
        if (!head) return;
        vector<ListNode*> arr;
        ListNode* curr=head;
        while(curr){
            arr.push_back(curr);
            curr=curr->next;
        }
        int n=arr.size();
        int left = 0, right = n - 1;
        while (left < right) {
            arr[left]->next = arr[right];
            left++;
            if (left == right) break;
            arr[right]->next = arr[left];
            right--;
        }
        arr[left]->next = nullptr;
    }
};
