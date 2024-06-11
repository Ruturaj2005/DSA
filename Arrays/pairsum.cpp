#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int key;
    int pairs=0;
    cout<<"Enter the Value"<<endl;
    cin>>key;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
               pairs+=1; 
            }
        }
    }
    cout<<pairs<<endl;
}