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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //maintain an unchanging reference to node ahead of the return node
        ListNode *prehead = new ListNode(-1);
        
        ListNode *prev = prehead;
        
        //while we have not reached the last node in either list
        while(l1 != NULL && l2 != NULL){
            if(l1->val <=l2->val){
                prev->next = l1;
                l1 = l1->next;
                
            }
            else{
                prev->next = l2;
                l2 = l2->next;
                
            }
                prev = prev->next;
            }
        //exactly one of l1 and l2 can be non - null at this point, so connect
        //the non-null list to the end of the merged list.
        prev->next = l1 == NULL ? l2 : l1;
        return prehead->next;
        
        }
    };
