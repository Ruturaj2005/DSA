#include<iostream>
using namespace std;
int main(){
    int n,i,sum;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    sum=0;
    for(i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<"\n"<<sum;
        }
        
    }
}
