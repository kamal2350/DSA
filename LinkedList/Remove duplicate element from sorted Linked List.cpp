Node *removeDuplicates(Node *head)
{
    if(head==NULL || head->next==NULL){
        return head;
    }
 // your code goes here
 Node* temp= head;
 Node* next=head;
 Node* res=next;
 while(temp!=NULL && temp->next!=NULL){
     next=temp->next;
     if(temp->data==next->data){   // if this is a case then don't move temp
         temp->next=next->next;
         next->next=NULL;
       
         
         
     }
     else{     // ** move temp only if the element in next is not same as temp **
        temp=next;
     }
 }
 return res;
}
