#include<iostream>
#include<climits>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int count=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            count+=1;
        }
    }
    cout<<count<<endl;
}