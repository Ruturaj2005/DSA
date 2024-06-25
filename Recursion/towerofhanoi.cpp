#include<iostream>
using namespace std;
void towerofhanoi(int n,char src,char dest,char helper){
    
    if(n==0){
        return;
    }
    
    towerofhanoi(n-1,src,helper,dest);
    cout<<"Move From"<<src<<"to"<<dest<<endl;
    towerofhanoi(n-1,helper,dest,src);
}
int main(){
    int n=3;
    towerofhanoi(n, 'A', 'B','C');
}