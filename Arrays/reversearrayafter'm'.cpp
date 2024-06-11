#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Give size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Enter position :"<<endl;
    int l;
    cin>>l;
    l=l+1;
    int r=n-1;
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    for(j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}