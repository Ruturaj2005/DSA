#include<iostream>
using namespace std;
int main(){
    int arr[6]={16,17,4,3,5,2};
    int brr[3];
    int max=arr[5];
    int n=6;
    cout << max << " ";
    for(int i=n-2;i>=0;i--){
        if(max<arr[i]){
            max=arr[i];
            cout<<max<<" ";
        }
        else{
            continue;
        }
    }
}