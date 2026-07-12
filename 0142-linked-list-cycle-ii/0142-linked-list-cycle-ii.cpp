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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        
        while(fast!=NULL && fast->next!=NULL) 
        {
            fast=fast->next->next;
            slow=slow->next;
        
            if(slow==fast) 
            {   
                slow=head;
                while(slow!=fast) {
                    
                    
                    fast=fast->next;
                    slow=slow->next;   
                }
                if(slow==fast) {
                   // int count=0;
                  //  ListNode *temp=head;
                    //while(temp==slow) {
                       // temp=temp->next;
                       // count++;
               // }
                return slow;
                }
                
            }
        }
        return 0;
    }
};