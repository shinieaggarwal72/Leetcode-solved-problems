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
    ListNode* oddEvenList(ListNode* head) {
        if(!head){
            return head;
        }
        if(!head->next){
            return head;
        }
        ListNode *temp = head;
        ListNode *end = head;
        ListNode* last;
        int count = 0;
        while(end->next != NULL){
            count++;
            end = end->next;
        }
        last = end;
        ListNode* stop = head->next;
        if(count%2){
            while(temp!=stop){
                last->next = temp->next;
                temp->next = temp->next->next;
                last = last->next;
                last->next = NULL;
                temp = temp->next;
            }
        }
        else{
            while(temp != end){
                last->next = temp->next;
                temp->next = temp->next->next;
                last = last->next;
                last->next = NULL;
                temp = temp->next;
            }
        }
        return head;
    }
};