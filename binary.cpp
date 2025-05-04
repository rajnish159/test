#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>&arr, int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
            break;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"please enter the size of the array: "<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"please enter the key: "<<endl;
    cin>>key;

    int ans = binarySearch(arr, n, key);
    if(ans==-1){
        cout<<"element not found.";
    }
    else{
        cout<<"element found at index "<<ans;
    }
    return 0;

}