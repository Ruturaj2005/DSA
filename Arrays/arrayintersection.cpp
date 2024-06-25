#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[5]={1,2,3,3,4};
    int arr2[3]={2,3,4};
    for(int i=0;i<5;i++){
        int element=arr[i];
        for(int j=0;j<3;j++){
            if(element<arr2[j]){
                break;
            }
            if(element==arr2[j]){
                cout<<element<<" ";
                arr2[j]=INT_MIN;
                break;
            }
        }
    }

    return 0;
}