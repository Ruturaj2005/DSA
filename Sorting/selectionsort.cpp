#include<iostream>
using namespace std;
int main(){
    int arr[6]={6,5,4,3,2,1};
    int i,j;
    for(i=0;i<5;i++){
        for(j=i+1;j<6;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}