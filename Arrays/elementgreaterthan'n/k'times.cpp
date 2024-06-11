#include<iostream>
using namespace std;

int main() {
    int arr[8] = {3,1,2,2,1,2,3,3};
    int n = 8;
    int k=4;
    int max=2;
    for(int i=0;i<n-1;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            cout<<arr[i]<<" "<<count<<endl;
        }
    }

}