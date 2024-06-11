#include <iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    int max=0;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum num in array is: "<<max<<endl;
    int min=max;
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum num in array is: "<<min<<endl;
    
    return 0;
}