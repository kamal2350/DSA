long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long l=0;
    long long r=0;
    long long n = 1000000007;  //ATQ
  //Your code here
  while(l1!=NULL){  // extract one number in l 
      l=((l*10)+l1->data)%n;
      l1=l1->next;
  }
   while(l2!=NULL){  //extract other number in r
      r=((r*10)+l2->data)%n;
      l2=l2->next;
  }
  long long res= l*r % (n);   // mulltiply both  
  return res;
  
}
