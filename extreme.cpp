#include<bits/stdc++.h>
using namespace std;

void extreme(vector<int>&arr, int n){
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(i==j){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<arr[i]<<" "<<arr[j]<<" ";
        }
        i++;
        j--;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"please enter the size of the array: "<<endl;
    cin>>n;
    cout<<"please enter the element of the array "<<endl;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    extreme(arr, n);
    return 0;

}