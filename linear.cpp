#include<bits/stdc++.h>
using namespace std;

int linearsearch(vector<int>&arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int key;
    vector<int>arr(n);
    cout<<"please enter key: ";
    cin>>key;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = linearsearch(arr, n, key);
    if(ans==-1){
        cout<<"keys not found.";
    }
   else{
    cout<<ans;
   }

    return 0;
}