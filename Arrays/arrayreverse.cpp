#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int arr[n];
    int brr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(i=n-1;i>=0;i--){
        brr[i]=arr[n-i-1];
    }
    for(j=0;j<n;j++){
        cout<<brr[j]<<" ";
    }
} 