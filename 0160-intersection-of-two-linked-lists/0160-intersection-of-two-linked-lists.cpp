/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        int lenA = 0;
        while(tempA != NULL){
            lenA++;
            tempA = tempA->next;
        }
        int lenB = 0;
        while(tempB != NULL){
            lenB++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;

        if(lenA>lenB){
            int diff = lenA-lenB;
            while(diff--) {
                tempA = tempA->next;
            }
        }else{
            int diff = lenB-lenA;
            while(diff--) {
                tempB = tempB->next;
            }
        }

        while(tempA != tempB) {
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return tempA;
    }
};