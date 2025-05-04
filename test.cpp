#include<bits/stdc++.h>
using namespace std;

void test(vector<int>&arr, int n){
    vector<int>ans;
    vector<int>ans1;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
           ans.push_back(arr[i]);
        }
        else{
            ans1.push_back(arr[i]);
        }
        
    }
    
    vector<int>final;
    int i=0, j = 0;

    while(i<ans.size() && j<ans1.size()){
        final.push_back(ans[i++]);
        final.push_back(ans1[j++]);
    }

    while(i<ans.size()){
        final.push_back(ans[i++]);
    }
    while(j<ans1.size()){
        final.push_back(ans1[j++]);
    }

    for(int num : final){
        cout<<num<<" ";
    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n; 
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    test(arr,n);
    return 0;

}