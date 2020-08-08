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
    //MERGE TWO SORTED LISTS RECURSIVELY
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        //if we reach the end of list 1 return list 2
        if(l1 == NULL) return l2;
        
        //if we reach the end of list 2 return list 1
        else if(l2 == NULL) return l1;
        
        //if we rach these statements we are still merging the lists
        //if the value in l1 is less
        else if(l1->val < l2->val){
            //then the next ponter in merge two lists will be L
            //we call this function recusivley
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else{
            l2->next = mergeTwoLists(l1,l2->next);
                return l2;
            }
        
        
        
    }
};
