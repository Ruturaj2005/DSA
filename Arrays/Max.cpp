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
        cout<<arr[i]<<endl;
    }
    int max_no=INT_MIN;
    for(i=0;i<n;i++){
        if(max_no<arr[i]){
            max_no=arr[i];
        }
    }
    cout<<max_no<<endl;
}