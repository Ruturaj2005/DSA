#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
}
