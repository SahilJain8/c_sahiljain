#include <bits/stdc++.h>
using namespace std;
 

void rvereseArray(int arr[], int start, int end)
{
    if (start >= end)
    return;
     
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
     
   
    rvereseArray(arr, start + 1, end - 1);
}    
 


int main()
{
  int a,n;
  cin>>a;
  cin>>n;
  int *arr=new int(n);
  for(int i=0;i<=n;i++){
      cin>>arr[i];
  }
  
  rvereseArray(arr,0,n-1);
  
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  delete(arr);
    return 0;

 
 
 
 
 
 
 
 
 
 //for vector<int>
 
 
//  #include <bits/stdc++.h> 
// void reverseArray(vector<int> &arr , int m)
// {
// 	int start=m+1,end=arr.size()-1;
//     int temp=0;
//     while(start<end){
//         temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
        
//     }
    

// }
