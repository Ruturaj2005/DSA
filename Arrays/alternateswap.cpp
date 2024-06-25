#include <iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<=3;j++){
            swap(arr[i],arr[j]);
            i++;
            break;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}