#include<iostream>
#include<unordered_set>
using namespace std;


int main(){
    int n;
    unordered_set <int> ans;
    unordered_set<int> :: iterator itr;
    cout<<"Enter the size";
   
    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        ans.insert(arr[i]);

    }
    for(itr=ans.begin();itr!=ans.end();itr++){
        cout<<*itr;
    }


return 0;

   
}