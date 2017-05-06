/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *first,*current,*previous;
    int isFirst = 1,lead = 0,temp_lead = 0,sum = 0;
    
    while(l1!= NULL || l2!=NULL) {
        current = (struct ListNode*) malloc(sizeof(struct ListNode));
        sum = (l1?l1->val:0)+(l2?l2->val:0);
        if(sum + lead >= 10){
            temp_lead = lead;
            lead = (sum+lead)/10;
            current->val = (sum+temp_lead)%10;
        } else {
            current->val = sum+lead;
            lead = 0;
        }
        if(isFirst) {
            first = current;
            isFirst = 0;
        } else {
            previous->next = current;
        }
        current->next = NULL;
        previous = current;
        if(l1)
            l1 = l1->next;
        if(l2)
            l2 = l2->next;
    }

    if (lead != 0) {
        current = (struct ListNode*) malloc(sizeof(struct ListNode));
        current->val = lead;
        current->next = NULL;
        previous->next = current;
    }
    return first;
     
}
