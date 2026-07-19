// Last updated: 7/19/2026, 10:19:04 PM
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num = 0;
        while (head != nullptr) {
            num = num * 2 + head->val;
            head = head->next;
        }
        return num;
    }
};
