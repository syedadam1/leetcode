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
        ListNode *newnode=NULL;
        ListNode *temp=NULL;
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        int carry=0;
        while(temp1 && temp2){
            int x=temp1->val+temp2->val+carry;
            if(!newnode){
                newnode=new ListNode(x%10);
                carry=x/10;
                temp=newnode;
            }
            else{
                ListNode *temp3=new ListNode(x%10);
                carry=x/10;
                temp->next=temp3;
                temp=temp->next;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(temp1){
            while(temp1){
                int x=temp1->val+carry;
                ListNode *temp3=new ListNode(x%10);
                temp->next=temp3;
                temp=temp->next;
                carry=x/10;
                temp1=temp1->next;
            }
            while(carry){
                ListNode *temp3=new ListNode(carry%10);
                temp->next=temp3;
                temp=temp->next;
                carry/=10;
            }
        }
        if(temp2){
            while(temp2){
                int x=temp2->val+carry;
                ListNode *temp3=new ListNode(x%10);
                temp->next=temp3;
                temp=temp->next;
                carry=x/10;
                temp2=temp2->next;
            }
            while(carry){
                ListNode *temp3=new ListNode(carry%10);
                temp->next=temp3;
                temp=temp->next;
                carry/=10;
            }
        }
        while(carry){
            ListNode *temp3=new ListNode(carry%10);
            temp->next=temp3;
            temp=temp->next;
            carry/=10;
        }
        return newnode;
    }
};