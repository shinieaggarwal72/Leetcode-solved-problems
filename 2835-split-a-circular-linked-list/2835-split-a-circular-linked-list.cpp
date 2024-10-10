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
    vector<ListNode*> splitCircularLinkedList(ListNode* list) {
        vector<ListNode*> res(2);
        if(!list){
            return res;
        }
        ListNode* temp = list->next;
        int count = 1;
        int sz = 0;
        int rem = 0;
        while(temp!=list){
            temp = temp->next;
            count++;
        }
        cout << "count = " << count << endl;
        rem = count%2;
        sz = count/2;
        temp = list;
        int i=0;
        int a = 2;
        while(a>0){
            ListNode* start = temp;
            res[i++] = start;
            int c = sz-1;
            while(c>0){
                temp = temp->next;
                c--;
            }
            if(rem){
                temp = temp->next;
                rem--;
            }
            ListNode* prev = temp;
            temp = temp->next;
            prev->next = start;
            a--;
        }
        return res;


    }
};