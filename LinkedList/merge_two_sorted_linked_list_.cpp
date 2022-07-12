

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* ans= new ListNode(0);
        ListNode* ans1= ans;
//         create two pointers because in the end one pointer is  pointing to end node but we want to return the first node so therefore
//           we will return ans->next;
        
        if(list1==NULL){
            return list2;
        }
        else if(list2==NULL) return list1;
        
        while(temp1!=NULL && temp2!=NULL){
//             data in first list pointer is less than make ans->next points to that data 
            if(temp1->val<temp2->val){
                ans->next=temp1;
                ans=ans->next;
                temp1=temp1->next;
            }
//            data in second list pointer is less than make ans->next points to that data 
            else{
                ans->next=temp2;
                ans=ans->next;
                temp2=temp2->next;
            }
          
        }
//       after one list pointer points to null then check for remaining nodes of other list 
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
};
