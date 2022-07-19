class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        
        if(head->next==NULL || head==NULL){   // base case
            return head;
        }
        Node *temp = reverseList(head->next); //head ka next will point to recursion's result
        
        head->next->next=head;
        head->next=NULL;
        return temp;
    }
    
};
