#include <iostream>
using namespace std;
int main() {
    int arr[5]={5,2,2,1,5};
    int unique=0;
    int count=0;
    for(int i=0;i<5;i++){
        count=0;
        for(int j=0;j<5;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<"Unique Element is: "<<arr[i]<<endl;
        }
    }
    
    return 0;
}