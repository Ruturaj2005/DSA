#include<iostream>
using namespace std;

int main() {
   int arr[4]={1,2,4,5};
   int num,index;
   int n=4;
   cin>>num;
   cin>>index;
   int newsize=n;
   for(int i=index;i<n;i++){
       arr[i+1]=arr[i];
   }
   arr[index]=num;
   for(int i=0;i<newsize;i++){
       cout<<arr[i]<<" ";
   }
}