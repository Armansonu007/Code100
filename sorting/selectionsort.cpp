//template
#include<iostream>
using namespace std;
void func(vector<int>arr, int n){
    //logic kya bolta hai selectio sort me 1 and n-1 division means agr 
    for(int i=0;i<n-1;++){
        int mini=i;
        for(int j=1;j<n;j++){
            if(arr[j]<arr[i])
            mini=j;
            
        }
        if(i!=mini) swap(arr[i], arr[mini]);
       
    }
}
int main(){
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int n=arr.size();
    func(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}