class Solution {
public:
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *l1=list1;
        ListNode *l2=list2;
         if(l1 == NULL)
         {
             return l2;
         }
         if(l2 == NULL)
         {
             return l1;
         }
         if(l1 -> val <= l2->val)
         {
             l1 -> next = mergeTwoLists(l1 -> next,l2);
             return l1;
         }
         else
         {
             l2 -> next = mergeTwoLists(l1,l2 -> next);
             return l2;
         }
     }
};