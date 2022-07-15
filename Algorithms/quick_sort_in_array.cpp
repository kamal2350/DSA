
namangupta021
17 hours ago

Total Time Taken:

0.01/1.12

 public:
   //Function to sort an array using quick sort algorithm.
   void quickSort(int arr[], int s, int e)
   {
       // code here
   if(s>=e)   // base case if size of array is 0 || 1
   return;
   int p;
   
   p=partition(arr,s,e);// pick the pivot element 
   
   quickSort(arr,s,p-1);  // recursiverly sort around pivot element
   quickSort(arr,p+1,e);
   }
   
   public:
   int partition (int arr[], int s, int e)
   {
      // Your code here
      
      int pivot=arr[s];int c=0;   // in this case pick the arr[s] as a pivot element  
    for(int i=s+1;i<=e;i++) 
     { if(arr[i]<=pivot)   // count all the elements smaller than pivot element to find the position of pivot element in sorted array
         c++;
    }
    int pi=s+c;    //* consider s+c not only c 
  
     swap(arr[s],arr[pi]);   // shift the pivot element to its actual position
  
     int i=s;
    int j=e;
     
     // make array looks like  smaller elements < pivot < greater elements
     while(i<pi&&j>pi)
     {
      while(arr[i]<=arr[pi])
      {
          i++;
      }
      while(arr[j]>arr[pi])
      {
          j--;
      }
      
      if(i<pi&&j>pi)
      {
          swap(arr[i++],arr[j--]);
      }
    }
  
    return pi;
  
   }
