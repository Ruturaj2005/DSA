#include<iostream>
using namespace std;
int main(){
    int arr[8]={5,0,2,0,0,4,3,0};
    for(int i=0;i<8-1;i++){
        for(int j=0;j<8-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}