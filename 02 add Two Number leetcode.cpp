/*
https://leetcode.com/problems/add-two-numbers/
*/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        int sum = l1->val + l2->val;
         int rem = sum/10;
        sum = sum%10;
        ListNode *first = new ListNode(sum);
        ListNode *last = first;
     //   ListNode *ans = first;
        l1=l1->next;
        l2=l2->next;
        while(l1!=nullptr && l2!=nullptr)
        {
            int sum = l1->val + l2->val;
            sum+=rem;
            rem = sum/10;
            sum = sum%10;
            ListNode *temp = new ListNode(sum);
            last->next = temp;
            last = temp;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=nullptr)
        {
            int sum = l1->val;
            sum+=rem;
            rem=sum/10;
            sum = sum%10;
            ListNode *temp = new ListNode(sum);
            last->next = temp;
            last = temp;
            l1 = l1->next;
        }
        while(l2!=nullptr)
        {
            int sum = l2->val;
            sum+=rem;
            rem = sum/10;
            sum = sum%10;
            ListNode *temp = new ListNode(sum);
            last->next = temp;
            last = temp;
            l2 = l2->next;
        }
        if(rem>0)
        {
            ListNode *temp = new ListNode(rem);
            last->next = temp;
            last = temp;
        }
        return first;


    }
};