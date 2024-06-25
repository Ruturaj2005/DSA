#include<iostream>
using namespace std;
int main(){
   int m,n,key;
   cin>>m>>n>>key;
   int arr[m][n];
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           cin>>arr[i][j];
       }
   }
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<"\n";
   }
   bool flag=true;
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           if(arr[i][j]==key){
               cout<<i<<j<<" ";
               flag=false;
           }
       }
   }
   if(flag==true){
       cout<<"Not Found";
   }
}