// similar to merge sort in array but here list contains nodes
//  find mid
// mergesort for left
// mergesort for right
// merge(left,right);




class Solution{
  public:
  
 Node* findMid(Node* head) {
    Node* slow = head;
    Node* fast = head -> next;
    
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next; 
    }
    return slow;
}
 
 Node* merge(Node* list1, Node* list2) {
        
        Node* temp1=list1;
        Node* temp2=list2;
        Node* ans= new Node(0);
        Node* ans1= ans;
        
        
        if(list1==NULL){
            return list2;
        }
        else if(list2==NULL) return list1;
        
        while(temp1!=NULL && temp2!=NULL){
            
            if(temp1->data<temp2->data){
                ans->next=temp1;
                ans=ans->next;
                temp1=temp1->next;
            }
            else{
                ans->next=temp2;
                ans=ans->next;
                temp2=temp2->next;
            }
        }
        while(temp1!=NULL){
            ans->next=temp1;
            ans=ans->next;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            ans->next=temp2;
            ans=ans->next;
            temp2=temp2->next;
        }
      
        return ans1->next;
    }
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code he
        if(head==NULL ||head->next==NULL)return head;
        Node* mid=findMid(head);
        Node* left=head;
        Node* right=mid->next;
        mid->next=NULL;
        //  left=mergeSort(left);
        //  right=mergeSort(right);
        
        return merge(mergeSort(left),mergeSort(right));
       
       
    
        
        
    }
};
