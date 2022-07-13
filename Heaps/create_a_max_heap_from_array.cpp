#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n,int i){
    int largest=i;
    int l=(2*i)+1; //left node of root
    int r=(2*i)+2;  // right node of root
    if(arr[largest]<arr[l]&&l<n){
        largest=l;
    }
    if(arr[largest]<arr[r]&& r<n){
        largest=r;
    }
    
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
    
}
void buildHeap(int arr[], int n){
    int startIdx=(n-1)/2;  // optimize-> starts from last nonleaf node 
    for(int i=startIdx;i>=0;i--){ // heapify till top node log n for heapify every node and to heapify all tree n logn
        heapify(arr,n,i);
    }
}
void printHeap(int arr[], int n)
{
    cout << "Array representation of Heap is:\n";
  
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
  
int main() {
     int arr[] = { 1, 3, 5 };
  
    int n = sizeof(arr) / sizeof(arr[0]);
  
    buildHeap(arr, n);
    printHeap(arr,n);
	return 0;
}
