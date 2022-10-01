#define NULL 0

class ListNode {

public:

    int val;

    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}

};

class Solution {

public:

    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {

//在此处补充你的代码
        ListNode *list_merged_head = NULL;
        ListNode *tem = NULL;
        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                if (list_merged_head == NULL){
                    list_merged_head = tem = new ListNode(l1->val);
                } else {
                    tem->next = new ListNode(l1->val);
                    tem = tem->next;
                }
                l1 = l1->next;
            } else {
                if (list_merged_head == NULL){
                    list_merged_head = tem = new ListNode(l2->val);
                } else {
                    tem->next = new ListNode(l2->val);
                    tem = tem->next;
                }
                l2 = l2->next;
            }
        }
        while (l1 != NULL){
            tem->next = new ListNode(l1->val);
            tem = tem->next;
            l1 = l1->next;
        }
        while (l2 != NULL){
            tem->next = new ListNode(l2->val);
            tem = tem->next;
            l2 = l2->next;
        }
        return list_merged_head;
    }

};
