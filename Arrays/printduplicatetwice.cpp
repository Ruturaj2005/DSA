#include <iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,2};
    int count=0;
    for(int i=0;i<4;i++){
        count=0;
        for(int j=0;j<5;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==2){
            cout<<"Duplicate Element is: "<<arr[i]<<endl;
        }
    }

    return 0;
}