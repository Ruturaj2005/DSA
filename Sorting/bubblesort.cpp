#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,2,7,4};
    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}